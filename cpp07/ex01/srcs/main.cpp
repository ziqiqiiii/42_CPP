#include "../headers/iter.hpp"

int main()
{
    {
        int intArray[] = {1, 2, 3, 4, 5};
        int intArrayLength = sizeof(intArray) / sizeof(int);

        cout << "-----------------------------"<< endl;
        cout << "Integer Test Cases" << endl;
        cout << "-----------------------------"<< endl;

        cout << "intArray elements before iter" << endl;
        iter(intArray, intArrayLength, print<int>);
        cout << endl;

        iter(intArray, intArrayLength, add2<int>);
        cout << "intArray [   add 2    ] to each elements" << endl; 
        iter(intArray, intArrayLength, print<int>);
        cout << endl;

        iter(intArray, intArrayLength, multiply2<int>);
        cout << "intArray [ multiply 2 ] to each elements" << endl;
        iter(intArray, intArrayLength, print<int>);
        cout << endl;
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
    {
        double doubleArray[] = {0.1, 0.2, 0.3, 0.4, 0.5};
        int doubleArrayLength = sizeof(doubleArray) / sizeof(double);
       
       cout << "-----------------------------"<< endl;
        cout << "Double Test Cases" << endl;
        cout << "-----------------------------"<< endl;

        cout << "doubleArray elements before iter" << endl;
        iter(doubleArray, doubleArrayLength, print<double>);
        cout << endl;

        iter(doubleArray, doubleArrayLength, add2<double>);
        cout << "doubleArray [   add 2    ] to each elements" << endl; 
        iter(doubleArray, doubleArrayLength, print<double>);
        cout << endl;

        iter(doubleArray, doubleArrayLength, multiply2<double>);
        cout << "doubleArray [ multiply 2 ] to each elements" << endl;
        iter(doubleArray, doubleArrayLength, print<double>);
        cout << endl;
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);

    return 0;
}