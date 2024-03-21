#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap A("A");
    ClapTrap B("B");

    cout << endl;
    A.attack(B.get_name());
    A.takeDamage(5);
    B.beRepaired(5);

    cout << endl;
    ScavTrap a("a");
    cout << endl;

    a.attack(B.get_name());
    a.takeDamage(100);
    a.beRepaired(50);
    a.guardGate();
    
    cout << endl;
    return 0;
} 