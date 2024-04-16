#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const n);
        Fixed(const Fixed &a);
        Fixed &operator = (const Fixed &a);
        ~Fixed(void);
        
        int toInt(void) const;
        float toFloat(void) const;
        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

// overload operator <<
// 1.When we need overload << & >> operator??
// cout << (user defined type) OR cin >> (user defined type)
// 2. Why we need to overload << & >> operator??
// Because cout & cin are objects of ostream & istream class respectively.
// Make the overload operator << & >> as friend function of class Fixed.

#endif