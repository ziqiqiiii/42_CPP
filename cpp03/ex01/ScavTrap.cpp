#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    cout << "ScavTrap constructor is called" << endl;
}

ScavTrap::~ScavTrap()
{
    cout << "ScavTrap destructor is called" << endl;
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap " << _name << " in gatekeeper mode" << endl;
}


I'd be glad to address the prompt's requirements and provide insights:

Here's the C++ code for the ScavTrap class, incorporating the specified requirements and demonstrating proper construction/destruction chaining:

C++
#include <iostream>

class ClapTrap {
public:
    // ... (ClapTrap class code as provided earlier) ...
};

class ScavTrap : public ClapTrap {
public:
    // ... (ScavTrap class code as provided earlier) ...
};

int main() {
    ClapTrap clap1("ClapTrap1", 150, 75, 30);
    ClapTrap clap2("ClapTrap2", 120, 60, 25);

    clap1.attack(clap2);
    clap2.attack(clap1);

    ScavTrap scav1("ScavTrap1");
    scav1.attack(clap1);
    scav1.guardGate();

    // Proper destruction chaining
    return 0; // Destructors called automatically at the end of main
}


// Explanation of Construction/Destruction Chaining:

// Construction:

// When a ScavTrap object is created (scav1 in this case), the constructor chain flows as follows:
// ScavTrap constructor is called first.
// ScavTrap constructor calls the base class (ClapTrap) constructor using the member initialization list. This ensures that the inherited members are properly initialized before any ScavTrap-specific actions occur.
// This order guarantees that the object is fully constructed from its base class up to the derived class, establishing a solid foundation for its functionality.

// Destruction:

// When a ScavTrap object goes out of scope (at the end of main), the destructor chain executes in reverse order:
// ScavTrap destructor is called first.
// ClapTrap destructor is called afterward.
// This reverse order is crucial for maintaining object integrity and avoiding potential memory issues:
// The derived class might have allocated resources or have dependencies on the base class members.
// Calling the derived class destructor first allows it to release its own resources and perform any necessary cleanup before the base class destructor starts cleaning up the shared members.
// This prevents potential errors or crashes that could arise if the base class members were deallocated prematurely.