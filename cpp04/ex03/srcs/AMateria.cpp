#include "../headers/AMateria.hpp"

AMateria::AMateria()
{
    // cout << "AMateria constructor" << endl;
    this->_type = "";
}

AMateria::AMateria(string const &type)
{
    this->_type = type;
    // cout << "AMateria " << type << " constructor" << endl;
}

AMateria::~AMateria()
{
    // cout << "AMateria " << this->_type << " destructor" << endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return (*this);
}
const string& AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    cout << "* " << this->_type << "is used on" << target.getName() << " *" << endl;
}