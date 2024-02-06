#ifndef WRONGMAO_HPP
# define WRONGMAO_HPP

#include "Wrong_DongWu.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);

		void makeSound() const;
};

#endif