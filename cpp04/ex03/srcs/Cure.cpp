#include "../headers/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    this->_type = "cure";
    // cout << "Cure constructor" << endl;
}

Cure::~Cure()
{
    // cout << "Cure destructor" << endl;
}

Cure::Cure(const Cure &other): AMateria("cure")
{
    // cout << "Cure copy constructor" << endl;
    *this = other;
}

Cure& Cure::operator=(const Cure &other)
{
    // cout << "Cure assignment operator" << endl;
    if (this != &other){
        this->_type = other._type;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
   cout << "* heals " << target.getName() << "'s wounds *" << endl;
}