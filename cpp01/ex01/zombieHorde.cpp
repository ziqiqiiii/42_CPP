#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << i;
        std::string str = ss.str();
        horde[i].setName(name + str);
    }

    return (horde);
}

