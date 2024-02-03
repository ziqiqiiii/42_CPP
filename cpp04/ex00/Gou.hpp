#ifndef GOU_HPP
# define GOU_HPP

#include "DongWu.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

		void makeSound() const;
};

#endif