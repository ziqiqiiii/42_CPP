#include "Wrong_Gou.hpp"

WrongDog::WrongDog()
{
	type = "WrongDog";
	cout << "WrongDog constructor is called" << endl;
}

WrongDog::~WrongDog()
{
	cout << "WrongDog destructor is called" << endl;
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other)
{
	cout << "WrongDog copy constructor is called" << endl;
	*this = other;
}

WrongDog& WrongDog::operator=(const WrongDog &other)
{
	cout << "WrongDog copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongDog::makeSound() const
{
	cout << "huffffff" << endl;
}