#ifndef WRONGGOU_HPP
# define WRONGGOU_HPP

#include "Wrong_DongWu.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		~WrongDog();
		WrongDog(const WrongDog &other);
		WrongDog &operator=(const WrongDog &other);

		void makeSound() const;
};

#endif