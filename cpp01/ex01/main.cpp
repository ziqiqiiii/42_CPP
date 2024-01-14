#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    std::cout << "\nCreating zombies" << std::endl;
    zombie = zombieHorde(5, "Eu Lee");
    std::cout << "\nZombie horde is created" << std::endl;
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    std::cout << "\nZombie horde is deleted" << std::endl;
    delete [] zombie;
    return (0);
}