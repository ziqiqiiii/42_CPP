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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

        // Comparison operators
        bool operator > (const Fixed &a) const;
        bool operator < (const Fixed &a) const;
        bool operator >= (const Fixed &a) const;
        bool operator <= (const Fixed &a) const;
        bool operator == (const Fixed &a) const;
        bool operator != (const Fixed &a) const;
        
        // Arithmetic operators
        Fixed operator + (const Fixed &other) const;
        Fixed operator - (const Fixed &other) const;
        Fixed operator * (const Fixed &other) const;
        Fixed operator / (const Fixed &other) const;

        // Increment/Decrement operators
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        // Static min and max function
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};

// overload operator <<
// 1.When we need overload << & >> operator??
// cout << (user defined type) OR cin >> (user defined type)
// 2. Why we need to overload << & >> operator??
// Because cout & cin are objects of ostream & istream class respectively.
// Make the overload operator << & >> as friend function of class Fixed.

#endif