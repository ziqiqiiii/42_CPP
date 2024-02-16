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

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
    cout << "FragTrap copy constructor is called" << endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    cout << "FragTrap copy assignment operator is called" << endl;
	if (this != &other)
    {
		this->_name = other._name;
        this->_attack_damage = other._attack_damage;
        this->_energy_points = other._energy_points;
        this->_hit_points = other._hit_points;
    }
	return (*this);

}

void FragTrap::highFivesGuys(void)
{
    cout << "FragTrap " << _name << " wanna high five with YOU !!!" << endl;
}