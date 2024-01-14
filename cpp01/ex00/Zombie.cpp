#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " is deleted" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "Zombie " << _name << " is created" <<std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}