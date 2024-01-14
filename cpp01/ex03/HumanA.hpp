#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

using std::cout;
using std::endl;

class HumanA
{
    public:
        HumanA(Weapon weapon);
        ~HumanA();
        void attack();
    private:
        Weapon _weapon;
};

#endif