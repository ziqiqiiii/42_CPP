#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
		Brain &operator=(const Brain &other);

        std::string ideas[100];
};

#endif