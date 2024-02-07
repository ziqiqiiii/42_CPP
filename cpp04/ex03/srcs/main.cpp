#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    cout << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
    {
        MateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        cout << endl;
        // Create characters
        ICharacter* alice = new Character("Alice");
        ICharacter* bob = new Character("Bob");
        ICharacter* charlie = new Character("Charlie");

        // Equip Alice with ice and cure materias
        for (int i = 0; i < 4; ++i)
            alice->equip(src->createMateria(i % 2 == 0 ? "ice" : "cure"));
        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);
        // Equip Bob with ice materias
        for (int i = 0; i < 4; ++i)
            bob->equip(src->createMateria("ice"));

        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);
        // Equip Charlie with cure materias
        for (int i = 0; i < 4; ++i)
            charlie->equip(src->createMateria("cure"));

        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        // Alice uses materias on Bob and Charlie
        for (int i = 0; i < 4; ++i)
        {
            alice->use(i, *bob);
            alice->use(i, *charlie);
        }

        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        // Bob uses all his materias on Alice and Charlie
        for (int i = 0; i < 4; ++i)
        {
            bob->use(i, *alice);
            bob->use(i, *charlie);
        }

        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        // Charlie uses all his materias on Bob and Alice
        for (int i = 0; i < 4; ++i)
        {
            charlie->use(i, *bob);
            charlie->use(i, *alice);
        }

        cout << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        // Testing unequip and reequip
        alice->unequip(2);
        alice->unequip(1);
        alice->equip(src->createMateria("ice"));
        alice->use(2, *charlie);
        cout << endl;

        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);
        // Showcasing deep copy in action
        Character* dave = new Character(*dynamic_cast<Character*>(alice));
        dave->setName("Dave");
        dave->use(0, *charlie);
        dave->use(1, *bob);
        alice->use(0, *dave);
        alice->use(1, *dave);

        // Clean up
        delete alice;
        delete bob;
        delete charlie;
        delete dave;
        delete src;

    }
    return 0;
}