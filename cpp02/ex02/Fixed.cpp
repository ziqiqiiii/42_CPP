#include "Fixed.hpp"

Fixed::Fixed(void): fixed_point(0)
{
    // cout << "Default constructor is called." << endl;
}

// Scaling: Multiply the integer by 2 raised to the power of the desired number of fractional bits. 
//         This essentially adds zeros to the right of the existing decimal point.
//Casting: Cast the scaled result to the chosen integer data type (e.g., int32_t).
Fixed::Fixed(int const n)
{
    // cout << "Int constructor is called." << endl;
    fixed_point = (int32_t)(n << fractional_bits);
}

// Scaling: Multiply the float by 2 raised to the power of the desired number of fractional bits.
//          This essentially multiplies the fractional part by a large power of 2.
// Rounding or Truncation: Choose a rounding strategy (e.g., round to nearest, truncate, etc.)
//                          to handle the potentially non-integral result from scaling.
/// Casting: Cast the rounded/truncated result to the chosen integer data type.
Fixed::Fixed(float const n)
{
    // cout << "Float constructor is called." << endl;
    fixed_point = (int32_t)(n * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &a)
{
    // cout << "Copy constructor is called." << endl;
    *this = a;
}

Fixed& Fixed::operator = (const Fixed &a)
{
    // cout << "Copy assignment operator is called." << endl;
    if (this != &a)
        fixed_point = a.fixed_point;
    return (*this);
}

Fixed::~Fixed(void)
{
    // cout << "Destructor is called" << endl;
}

// Shifts the fixed-point value right by the number of fractional bits, 
// effectively removing the fractional part and leaving the integer part.
int Fixed::toInt(void) const
{
    return (fixed_point >> fractional_bits);
}
// Divides the fixed-point value by 2 raised to the power of the number of 
// fractional bits, effectively scaling it back to a floating-point representation.
float Fixed::toFloat(void) const
{
    return ((float)fixed_point / (1 << fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    // cout << "getRawBits member function is called" << endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    // cout << "setRawBits member function is called" << endl;
    this->fixed_point = raw;
}