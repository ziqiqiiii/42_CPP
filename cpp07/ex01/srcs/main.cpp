#include "../headers/iter.hpp"

int main()
{
	int intArray = {1, 2, 3, 4, 5};
    int intArrayLength = sizeof(intArray) / sizeof(int);
    iter(intArray, intArrayLength, add2);
    cout << "intArray add 2 to each elements" << endl; 
    return 0;
}