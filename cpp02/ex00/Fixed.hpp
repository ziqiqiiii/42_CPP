#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
    private:
        int32_t fixed_point;
        static const int fractional = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &a);
        Fixed &operator = (const Fixed &a);
        ~Fixed(void);
    
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif