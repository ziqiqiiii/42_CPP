#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
//     ClapTrap A("A");
//     ClapTrap B("B");

//     A.attack(B.get_name());
//     A.takeDamage(5);
//     B.beRepaired(5);
    ScavTrap a("a");

    a.takeDamage(100);
    a.beRepaired(50);
    a.guardGate();
    return 0;
} 