#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    cout << "FragTrap " << _name << " constructor is called" << endl;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap " << _name << " destructor is called" << endl;
}

void FragTrap::highFivesGuys(void)
{
    cout << "FragTrap " << _name << " wanna high five with YOU !!!" << endl;
}