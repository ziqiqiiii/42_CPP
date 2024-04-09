#include "../headers/whatever.hpp"

int main()
{
    int a = 2;
	int b = 3;
    swap(a, b);
    cout << "a && b swap" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << min( a, b ) << endl;
	cout << "max( a, b ) = " << max( a, b ) << endl;

    cout << endl;

    string c = "chaine1";
	string d = "chaine2";
	swap(c, d);
    cout << "c && d swap" << endl;
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << ::min( c, d ) << endl;
	cout << "max( c, d ) = " << ::max( c, d ) << endl;

    return 0;
}