#include "DongWu.hpp"

Animal::Animal()
{
	cout << "Animal constructor is called" << endl;
}

Animal::~Animal()
{
	cout << "Animal destructor is called" << endl;
}

Animal::Animal(const Animal &other)
{
	cout << "Animal copy constructor is called" << endl;
}

Animal& Animal::operator = (const Animal &other)
{
	cout << "Animal copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

