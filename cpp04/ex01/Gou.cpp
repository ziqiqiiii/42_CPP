#include "Gou.hpp"
#include "Brain.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	cout << "Dog constructor is called" << endl;
}

Dog::~Dog()
{
	delete brain;
	cout << "Dog destructor is called" << endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	cout << "Dog copy constructor is called" << endl;
	if (this != &other){
		this->type = other.type;
		this->brain = new Brain(*other.brain); }
}

Dog& Dog::operator=(const Dog &other)
{
	cout << "Dog copy assignment operator is called" << endl;
	if (this != &other)
	{
		this->type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}


void Dog::makeSound() const
{
	cout << "Woof" << endl;
}

void Dog::putIdeas(std::string idea, int i)
{
	this->brain->ideas[i] = idea;
}

std::string Dog::getIdeas(int n)
{
    return (this->brain->ideas[n]);
}
