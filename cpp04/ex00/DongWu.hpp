#ifndef DONGWU_HPP
# define DONGWU_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal &other);
		Animal &operator = (const Animal &other);
		
		void makeSound();
};

#endif