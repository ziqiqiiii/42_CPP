#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // cout << "MaterialScource constructor" << endl;
    for (int i = 0; i < 4; i++)
        this->_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    // cout << "MateriaSource Destructor" << endl;
    for (int i = 0; i < 4; i++)
        delete this->_source[i];
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    // cout << "MateriaSource copy constructor" << endl;
    if (this != &other) {
        for(int i = 0; i < 4; i++) {
            if (other._source[i] != NULL)
                this->_source[i] = other._source[i];
            else
                this->_source[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    // cout << "MateriaSource copy assignment operator" << endl;
    if (this != &other) {
        for(int i = 0; i < 4; i++) {
            if (this->_source[i] != NULL)
                delete this->_source[i];
            if (other._source[i] != NULL)
                this->_source[i] = other._source[i]->clone();
            else
                this->_source[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (materia == NULL || materia->getType() == "")
        return ;
    int i = -1;
    while (++i < 4)
    {
        if (this->_source[i] == NULL) {
            this->_source[i] = materia;
            break ;
        }
    }
    cout << "Materia " << materia->getType() << " added to the source[" << i << "]" << endl;
}

AMateria* MateriaSource::createMateria(string const &type)
{
    for(int i = 0; i < 4; i++) {
        if ((this->_source[i] != NULL) && (this->_source[i]->getType() == type)) {
            return (this->_source[i]->clone());
        }
    }
    return (NULL);
}