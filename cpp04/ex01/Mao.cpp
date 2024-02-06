#include "Mao.hpp"
#include "Brain.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	cout << "Cat constructor is called" << endl;
}

Cat::~Cat()
{
	delete brain;
	cout << "Cat destructor is called" << endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	cout << "Cat copy constructor is called" << endl;
	if (this != &other){
	this->type = other.type;
	this->brain = new Brain(*other.brain); }
}

Cat& Cat::operator = (const Cat &other)
{
	cout << "Cat copy assignment operator is called" << endl;
	if (this != &other)
	{
		this->type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}

void Cat::putIdeas(std::string idea, int i)
{
	this->brain->ideas[i] = idea;
}

std::string Cat::getIdeas(int n)
{
    return (this->brain->ideas[n]);
}