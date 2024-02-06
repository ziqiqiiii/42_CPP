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
		virtual Animal &operator=(const Animal &other);
		
		virtual void makeSound() const;
        virtual void putIdeas(std::string idea, int i) = 0;
        virtual std::string getIdeas(int n) = 0;
		virtual std::string getType() const;
};

#endif