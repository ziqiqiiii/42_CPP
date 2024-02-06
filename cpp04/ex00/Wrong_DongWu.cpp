#include "Wrong_DongWu.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Random Wronganimal";
	cout << "WrongAnimal constructor is called" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor is called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	cout << "WrongAnimal copy constructor is called" << endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &other)
{
	cout << "WrongAnimal copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	cout << "Random wrong animal is making sound" << endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}