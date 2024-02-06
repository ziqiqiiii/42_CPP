#include "DongWu.hpp"
#include "Gou.hpp"
#include "Mao.hpp"

int main()
{
	{
		Dog *dog1 = new Dog();
		Dog* dog2 = new Dog(*dog1);
		Dog* dog3 = dog2;
		cout << endl;
		dog1->putIdeas("Fetch the ball", 0);
  		dog1->putIdeas("Chase squirrels", 1);
		dog2->putIdeas("Play Frisbee", 0);
		dog2->putIdeas("hello", 1);
		cout << endl;
  		cout << "Dog1 ideas: " << dog1->getIdeas(0) << ", " << dog1->getIdeas(1) << endl;
  		cout << "Dog2 ideas: " << dog2->getIdeas(0) << ", " << dog2->getIdeas(1) << endl;
		cout << "Dog3 ideas: " << dog3->getIdeas(0) << ", " << dog3->getIdeas(1) << endl;
		cout << endl;
		dog2->putIdeas("wahhlalal", 0);
		cout << "Dog1 ideas: " << dog1->getIdeas(0) << ", " << dog1->getIdeas(1) << endl;
		cout << "Dog2 ideas: " << dog2->getIdeas(0) << ", " << dog2->getIdeas(1) << endl;
		cout << "Dog3 ideas: " << dog3->getIdeas(0) << ", " << dog3->getIdeas(1) << endl;
		cout << endl;
		delete dog1;
		delete dog2;
	}
	cout << endl;
	cout << "Please Enter to continue" << endl;
	std::string input;
	getline(std::cin, input);
	{
		Cat* Cat1 = new Cat();
		Cat* Cat2 = new Cat(*Cat1);
		Cat* Cat3 = Cat1;
		cout << endl;
		Cat1->putIdeas("MaoMi 1", 0);
  		Cat1->putIdeas("good morning", 1);
		Cat2->putIdeas("MaoMi 2", 0);
		Cat2->putIdeas("good afternoon", 1);
		cout << endl;
  		cout << "Cat1 ideas: " << Cat1->getIdeas(0) << ", " << Cat1->getIdeas(1) << endl;
  		cout << "Cat2 ideas: " << Cat2->getIdeas(0) << ", " << Cat2->getIdeas(1) << endl;
		cout << "Cat3 ideas: " << Cat3->getIdeas(0) << ", " << Cat3->getIdeas(1) << endl;
		cout << endl;
		Cat3->putIdeas("MaoMi 3", 0);
		cout << "Cat1 ideas: " << Cat1->getIdeas(0) << ", " << Cat1->getIdeas(1) << endl;
		cout << "Cat2 ideas: " << Cat2->getIdeas(0) << ", " << Cat2->getIdeas(1) << endl;
		cout << "Cat3 ideas: " << Cat3->getIdeas(0) << ", " << Cat3->getIdeas(1) << endl;
		cout << endl;
		delete Cat1;
		delete Cat2;
	}
	cout << endl;
	cout << "Please Enter to continue" << endl;
	getline(std::cin, input);
	{
		int num = 10;
		Animal* animal[num];

		for(int i = 0; i < num / 2; i++){
			animal[i] = new Dog();
		}
		for(int i = num / 2; i < num; i++){
			animal[i] = new Cat();
		}
		cout << endl << endl;

		animal[0]->putIdeas("Dog 0 dunno have no idea", 0);
		animal[9]->putIdeas("Cat 9 have some idea", 0);

		animal[5]->putIdeas(animal[0]->getIdeas(0), 0);
		cout << animal[0]->getIdeas(0) << endl;
		cout << animal[9]->getIdeas(0) << endl;
		cout << animal[5]->getIdeas(0) << endl;
		cout << endl << endl;
		for (int i = 0; i < num; i++){
			delete animal[i];
		}
	}
	return 0;
}