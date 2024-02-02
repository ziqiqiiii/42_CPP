#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;

class ClapTrap
{
    private:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string& get_name(void);
};

#endif