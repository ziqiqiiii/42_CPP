#include "Character.hpp"

Character::Character() : _name("Unknown")
{
    for (int i = 0; i < 4; i++) {
        _materia[i] = NULL;
        _x_materia[i] = NULL;
    }
    // cout << "Character " << _name << " constructor" << endl;
}

Character::Character(string name) : _name(name)
{
    for (int i = 0; i < 4; i++) {
        _materia[i] = NULL;
        _x_materia[i] = NULL;
    }
    // cout << "Character " << _name << " constructor" << endl;
}

Character::Character(const Character &other)
{
    // cout << "Character copy constructor" << endl;
    this->_name = other.getName();
    for( int i = 0; i < 4; i++) {
        if (other._materia[i] != NULL) {
            this->_materia[i] = other._materia[i]->clone();
        }
        else
            this->_materia[i] = NULL;
        if (other._x_materia[i] != NULL) {
            this->_x_materia[i] = other._x_materia[i]->clone();
        }
        else
            this->_x_materia[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    // cout << "Character copy assignment operator" << endl;
    if (this != &other)
    {
        this->_name = other.getName();
        for( int i = 0; i < 4; i++) {
            if (other._materia[i] != NULL) {
                this->_materia[i] = other._materia[i]->clone();
            }
            else
                this->_materia[i] = NULL;
            if (other._x_materia[i] != NULL) {
                this->_x_materia[i] = other._x_materia[i]->clone();
            }
            else
                this->_x_materia[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    // cout << "Charcter destructor" << endl;
    for(int i = 0; i < 4; i++) {
        if (this->_materia[i] != NULL) {
            delete this->_materia[i]; }
        if (this->_x_materia[i] != NULL) {
            delete this->_x_materia[i]; }
    }
}

string const& Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *materia)
{
    if (materia == NULL || materia->getType() == "")
        return ;
    int i = -1;
    while (++i < 4)
    {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = materia;
            break ;
        }
    }
    cout << this->getName() << " equiped " << materia->getType() << " on the slot " << i << endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return ;
    if ((this->_materia[idx] != NULL) && (this->_materia[idx]->getType() != ""))
    {
        for(int a = 0; a < 4; a++) 
        {
            if (this->_x_materia[a] == NULL) 
            {
                this->_x_materia[a] = this->_materia[idx];
                this->_materia[idx] = NULL;
                break ; 
            }
        }

    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return ;
    if (this->_materia[idx] == NULL)
        return ;
    cout << this->_name << " ";
    this->_materia[idx]->use(target);
}