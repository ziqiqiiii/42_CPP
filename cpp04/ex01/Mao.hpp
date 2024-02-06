#ifndef MAO_HPP
# define MAO_HPP

#include "DongWu.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);

		void makeSound() const;
		void putIdeas(std::string idea, int i);
        std::string getIdeas(int n);
};

#endif