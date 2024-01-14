#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);
        void announce();
    private:
        std::string _name;

};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif