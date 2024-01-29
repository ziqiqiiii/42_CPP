#include "Fixed.hpp"

Fixed::Fixed(void): fixed_point(0)
{
    cout << "Default constructor is called." << endl;
}

Fixed::Fixed(const Fixed &a)
{
    cout << "Copy constructor is called." << endl;
    *this = a;
}

Fixed& Fixed::operator = (const Fixed &a)
{
    cout << "Copy assignment operator is called." << endl;
    if (this != &a)
        fixed_point = a.fixed_point;
    return (*this);
}

Fixed::~Fixed(void)
{
    cout << "Destructor is called" << endl;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function is called" << endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member function is called" << endl;
    this->fixed_point = raw;
}
