#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): _weapon(weapon), _name(name)
{
    cout << _name << " is created" << endl;
}

HumanA::~HumanA()
{
    cout << _name << " is deleted " << endl;
}

void HumanA::attack()
{
    cout << _name << " attacks with their " << _weapon.getType() << endl;
}
