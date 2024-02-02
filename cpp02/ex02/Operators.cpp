#include "Fixed.hpp"

// -- [Comparison Operators] --

bool Fixed::operator> (const Fixed &a) const
{
	return fixed_point > a.fixed_point;
}

bool Fixed::operator< (const Fixed &a) const
{
	return fixed_point < a.fixed_point;
}

bool Fixed::operator>= (const Fixed &a) const
{
	return fixed_point >= a.fixed_point;
}

bool Fixed::operator<= (const Fixed &a) const
{
	return fixed_point <= a.fixed_point;
}

bool Fixed::operator== (const Fixed &a) const
{
	return fixed_point == a.fixed_point;
}

bool Fixed::operator!= (const Fixed &a) const
{
	return fixed_point != a.fixed_point;
}

// -- [ARITHMETIC OPERATORS] -- 

Fixed Fixed::operator* (const Fixed &other) const
{
	Fixed temp;

	temp = toFloat() * other.toFloat();
	return temp;
}

Fixed Fixed::operator/ (const Fixed &other) const
{
	Fixed temp;

	temp = toFloat() / other.toFloat();
	return temp;
}

Fixed Fixed::operator+ (const Fixed &other) const
{
	Fixed temp;

	temp = toFloat() + other.toFloat();
	return temp;
}

Fixed Fixed::operator- (const Fixed &other) const
{
	Fixed temp;

	temp = toFloat() - other.toFloat();
	return temp;
}


// -- [Increament/Decrement operators] --

// They presence of an extra 'int' parameter mean the function
// is post-increament/post-increament
// Or else, vise versa.
// Pre-increament/pre-decreament return a reference of the
// current object
// Post-increamen/post-decreament return a copy of the object

Fixed& Fixed::operator++()
{
	++fixed_point;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	++fixed_point;
	return temp;
}

Fixed& Fixed::operator--()
{
	--fixed_point;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(fixed_point);
	return temp;
}

// Static min and max function

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}