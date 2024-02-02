#include "ClapTrap.hpp"


int main()
{
    ClapTrap A("A");
    ClapTrap B("B");

    A.attack(B.get_name());
    A.takeDamage(5);
    B.beRepaired(5);

    return 0;
} 