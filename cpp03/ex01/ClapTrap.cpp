#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    cout << "ClapTrap "<< name << " constructor is called" << endl;
}

ClapTrap::~ClapTrap(void)
{
    cout << "Claptrap " << _name << " destructor is called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    cout << "ClapTrap copy constructor is called" << endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    cout << "ClapTrap copy assignment operator is called" << endl;
	if (this != &other)
    {
		this->_name = other._name;
        this->_attack_damage = other._attack_damage;
        this->_energy_points = other._energy_points;
        this->_hit_points = other._hit_points;
    }
	return (*this);

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