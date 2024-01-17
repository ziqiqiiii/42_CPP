#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): _weapon(NULL), _name(name)
{
    cout << _name << " is created" << endl;
}

HumanB::~HumanB()
{
    cout << _name << " is deleted" << endl;
}

void HumanB::attack()
{
    if (_weapon)
        cout << _name << " attacks with their " << _weapon->getType() << endl;
    else
        cout << _name << " attacks with their fist" << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}