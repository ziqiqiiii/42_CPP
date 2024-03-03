#include "Weapon.hpp"

Weapon::Weapon(const std::string type): _type(type) 
{
    cout << "Weapon " << _type << " is created" << endl;
}

Weapon::~Weapon()
{
    cout << "Weapon " << _type << " is removed" << endl;
}

void Weapon::setType(std::string newtype)
{
    this->_type = newtype;
}

const std::string& Weapon::getType()
{
    return (_type);
}