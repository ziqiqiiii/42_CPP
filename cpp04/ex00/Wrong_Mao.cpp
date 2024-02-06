#include "Wrong_Mao.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	cout << "WrongCat constructor is called" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor is called" << endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	cout << "WrongCat copy constructor is called" << endl;
	*this = other;
}

WrongCat& WrongCat::operator = (const WrongCat &other)
{
	cout << "WrongCat copy assignment operator is called" << endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	cout << "siiiii" << endl;
}