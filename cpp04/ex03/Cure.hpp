#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>
# include <string.h>

using std::cout;
using std::endl;
using std::string;

class Cure: public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);

        AMateria* clone() const;
        void use(ICharacter &target);

};

#endif