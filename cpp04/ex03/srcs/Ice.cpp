#include "../headers/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    this->_type = "ice";
    // cout << "Ice constructor" << endl;
}

Ice::~Ice()
{
    // cout << "Ice destructor" << endl;
}

Ice::Ice(const Ice &other): AMateria("ice")
{
    // cout << "Ice copy constructor" << endl;
    *this = other;
}

Ice& Ice::operator=(const Ice &other)
{
    // cout << "Ice assignment operator" << endl;
    if (this != &other){
        this->_type = other._type;
    }
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}