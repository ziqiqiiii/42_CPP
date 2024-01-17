#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Weapon
{
    public:
        Weapon(const std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string getType();
    private:
        std::string _type;

};

# endif