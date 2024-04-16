#include "../headers/whatever.hpp"

struct Person {
    std::string name;
    int age;
};

int main()
{
	{
		cout << "-----------------------------"<< endl;
		cout << "Integer Test Cases" << endl;
		cout << "-----------------------------"<< endl;

		int a = 2;
		int b = 3;

		cout << "Before swap" << endl;
		cout << "a = " << a << ", b = " << b << endl;

		swap(a, b);
		cout << "a && b swap" << endl;
		cout << "a = " << a << ", b = " << b << endl;

		cout << "MIN && MAX" << endl;
		cout << "min( a, b ) = " << min( a, b ) << endl;
		cout << "max( a, b ) = " << max( a, b ) << endl;
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
	{
		cout << "-----------------------------"<< endl;
		cout << "String Test Cases" << endl;
		cout << "-----------------------------"<< endl;

		string c = "chaine1";
		string d = "chaine2";

		cout << "Before swap" << endl;
		cout << "c = " << c << ", d = " << d << endl;

		swap(c, d);

		cout << "c && d swap" << endl;
		cout << "c = " << c << ", d = " << d << endl;

		cout << "MIN && MAX" << endl;
		cout << "min( c, d ) = " << min( c, d ) << endl;
		cout << "max( c, d ) = " << max( c, d ) << endl;
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	{
		cout << "-----------------------------"<< endl;
		cout << "Char Test Cases" << endl;
		cout << "-----------------------------"<< endl;

		char c1 = 'c';
		char c2 = 'd';

		cout << "Before swap" << endl;
		cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

		swap( c1, c2 );
		cout << "c1 && c2 swap" << endl;
		cout << "c1 = " << c1 << ", c2 = " << c2 << endl; 

		cout << "MIN && MAX" << endl;
		cout << "min( c1, c2 ) = " << min( c1, c2 ) << endl;
		cout << "max( c1, c2 ) = " << max( c1, c2 ) << endl;
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	{
		cout << "-----------------------------"<< endl;
		cout << "Double Test Cases" << endl;
		cout << "-----------------------------"<< endl;

		double d1 = 0.5;
		double d2 = 5.0;

		cout << "Before swap" << endl;
		cout << "d1 = " << d1 << ", d2 = " << d2 << endl;

		swap( d1, d2 );

		cout << "d1 && d2 swap" << endl;
		cout << "d1 = " << d1 << ", d2 = " << d2 << endl;

		cout << "MIN && MAX" << endl;
		cout << "min( d1, d2 ) = " << min( d1, d2 ) << endl;
		cout << "max( d1, d2 ) = " << max( d1, d2 ) << endl;
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	{
		cout << "-----------------------------"<< endl;
		cout << "Double Test Cases" << endl;
		cout << "-----------------------------"<< endl;

		Person person1 = {"Alice", 30};
		Person person2 = {"Bob", 25};

		cout << "Before swap" << endl;
		cout << "person 1: " << person1.name << " , age: " << person1.age << endl;
		cout << "person 2: " << person2.name << " , age: " << person2.age << endl;

		swap(person1, person2);

		cout << "swap person1 and person2" << endl;
		cout << "person 1: " << person1.name << " , age: " << person1.age << endl;
		cout << "person 2: " << person2.name << " , age: " << person2.age << endl;
		std::cout << "Person 1 age: " << person1.age << ", Person 2 age: " << person2.age << std::endl;
		std::cout << "Youngest person: " << min(person1.age, person2.age) << std::endl;
		std::cout << "Oldest person: " << max(person1.age, person2.age) << std::endl;
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    return 0;
}