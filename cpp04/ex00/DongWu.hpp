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
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif