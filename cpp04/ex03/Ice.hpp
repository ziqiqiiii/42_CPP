#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>
# include <string.h>

using std::cout;
using std::endl;
using std::string;

class ICharacter;

class Ice: public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);

        AMateria* clone() const;
        void use(ICharacter &target);

};

#endif