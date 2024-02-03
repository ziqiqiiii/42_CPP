#include "Gou.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "Dog constructor is called" << endl;
}

Dog::~Dog()
{
	cout << "Dog destructor is called" << endl;
}

Dog::Dog(const Dog &other)
{
	cout << "Dog copy constructor is called" << endl;
	*this = other;
}

Dog& Dog::operator = (const Dog &other)
{
	cout << "Dog copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	cout << "Woof" << endl;
}
