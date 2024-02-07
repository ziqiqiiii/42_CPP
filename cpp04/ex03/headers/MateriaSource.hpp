#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string.h>

using std::cout;
using std::endl;
using std::string;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(string const &type) = 0;
};

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* _source[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource &operator=(const MateriaSource& other);

        void learnMateria(AMateria* materia);
        AMateria* createMateria(string const &type);
};

#endif