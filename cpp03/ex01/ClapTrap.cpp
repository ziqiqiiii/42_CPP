#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    cout << name << " constructor is called" << endl;
}

ClapTrap::~ClapTrap(void)
{
    cout << _name << " destructor is called" << endl;
}

void ClapTrap::attack(const std::string &target)
{
    cout << "ClapTrap " << _name << " attacks " << target;
    cout << ", causing -1 point of damage" << endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_points -= amount;
    cout << "ClapTrap " << this->_name << " takes " << amount;
    cout << " points of damage" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hit_points += amount;
    cout << "ClapTrap " << this->_name << " repair " << amount;
    cout << " of hit points" << endl;
}

std::string& ClapTrap::get_name(void)
{
    return this->_name;
}