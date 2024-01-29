#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b;
    Fixed c;
    Fixed d;

    c = b;
    cout << "a " << a.getRawBits() << endl;
    cout << "b " << b.getRawBits() << endl;
    cout << "c " << c.getRawBits() << endl;
    c.setRawBits(21);
    cout << "c " << c.getRawBits() << endl;
    d = c;
    cout << "d " <<d.getRawBits() << endl;
    d.setRawBits(42);
    cout << "d " <<d.getRawBits() << endl;
    cout << "b " << b.getRawBits() << endl;
    return (0);
}