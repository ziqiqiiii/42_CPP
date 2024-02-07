#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Character.hpp"
# include <iostream>
# include <string.h>
# include <cctype>

using std::string;
using std::cout;
using std::endl;

class ICharacter;

class AMateria 
{
    protected:
        string _type;
    public:
        AMateria();
        AMateria(string const &type);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();

        virtual string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif