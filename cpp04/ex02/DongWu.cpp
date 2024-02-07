#include "DongWu.hpp"

Animal::Animal()
{
	type = "Random animal";
	cout << "Animal constructor is called" << endl;
}

Animal::~Animal()
{
	cout << "Animal destructor is called" << endl;
}

Animal::Animal(const Animal &other)
{
	cout << "Animal copy constructor is called" << endl;
	*this = other;
}

Animal& Animal::operator=(const Animal &other)
{
	cout << "Animal copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	cout << "Random animal is making sound" << endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

