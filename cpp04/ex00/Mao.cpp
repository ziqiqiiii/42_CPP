#include "Mao.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "Cat constructor is called" << endl;
}

Cat::~Cat()
{
	cout << "Cat destructor is called" << endl;
}

Cat::Cat(const Cat &other)
{
	cout << "Cat copy constructor is called" << endl;
	*this = other;
}

Cat& Cat::operator = (const Cat &other)
{
	cout << "Cat copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	cout << "Woof" << endl;
}
