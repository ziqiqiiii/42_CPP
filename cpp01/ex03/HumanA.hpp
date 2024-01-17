#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

class HumanA
{
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void attack();
    private:
        Weapon &_weapon;
        std::string _name;
};

#endif