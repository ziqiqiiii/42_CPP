#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain constructor is called" << endl;
    for(int i = 0; i < 100; i++){
        ideas[i] = "";
    }
}

Brain::~Brain()
{
    cout << "Brain destructor is called" << endl;
}

Brain::Brain(const Brain &other)
{
    cout << "Brain copy constructor is called" << endl;
	for(int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator = (const Brain &other)
{
	cout << "Brain copy assignment operator is called" << endl;
	if (this != &other){
        for(int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i]; 
    }}
	return (*this);
}
