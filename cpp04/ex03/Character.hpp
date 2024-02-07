#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string.h>

using std::cout;
using std::endl;
using std::string;

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _materia[4];
        AMateria* _x_materia[4];
    public:
        Character();
        Character(string name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        ~Character();

        string const & getName() const;
        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif