#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon();
        ~Weapon();
        void setType(std::string type);
        Weapon(std::string type);
        std::string getType();
    private:
        std::string _type;

};

# endif