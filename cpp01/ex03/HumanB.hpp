#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

using std::cout;
using std::endl;

class HumanB
{
    public:
        HumanB();
        ~HumanB();
        void attack();
    private:
        Weapon _weapon;
};

#endif