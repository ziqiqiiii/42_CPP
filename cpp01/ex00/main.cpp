#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    zombie = newZombie("Bob");
    zombie->announce();
    delete zombie;
    randomChump("EuLee");
    zombie = newZombie("Bob eu lee");
    zombie->announce();
    delete zombie;
    return (0);
}