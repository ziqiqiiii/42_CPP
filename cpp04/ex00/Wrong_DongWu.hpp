#ifndef WRONGDONGWU_HPP
# define WRONGDONGWU_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif