#ifndef GOU_HPP
# define GOU_HPP

#include "DongWu.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);

		void makeSound() const;
        void putIdeas(std::string idea, int i);
        std::string getIdeas(int n);
};

#endif