#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

class HumanB
{
    public:
        HumanB(const std::string &name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);

    private:
        Weapon *_weapon;
        std::string _name;
};

#endif