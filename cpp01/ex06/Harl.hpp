#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <ctype.h>
#include <cstring>

using std::cout;
using std::endl;

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif