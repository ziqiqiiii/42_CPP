#include "DongWu.hpp"
#include "Gou.hpp"
#include "Mao.hpp"

#include "Wrong_DongWu.hpp"
#include "Wrong_Gou.hpp"
#include "Wrong_Mao.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		cout << endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		cout << endl;
		delete meta;
		delete j;
		delete i;	
	}
	cout << endl;
	cout << "Please Enter to continue" << endl;
	std::string input;
	getline(std::cin, input);
	{

		const WrongAnimal* google = new WrongAnimal();
		const WrongAnimal* a = new WrongDog();
		const WrongAnimal* b = new WrongCat();
		cout << endl;
		std::cout << a->getType() << " " << std::endl;
		std::cout << b->getType() << " " << std::endl;
		b->makeSound();
		a->makeSound();
		google->makeSound();
		cout << endl;
		delete google;
		delete a;
		delete b;	
	}
	return 0;
}