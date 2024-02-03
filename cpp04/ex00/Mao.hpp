#ifndef MAO_HPP
# define MAO_HPP

#include "DongWu.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);

		void makeSound() const;
};

#endif