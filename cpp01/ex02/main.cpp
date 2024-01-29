#include <iostream>
#include <string>
#include <stdio.h>

using std::cout;
using std::endl;

int main(void)
{
    std::string strVar = "HI THIS IS BRAIN";
    std::string *stringPTR = &strVar;
    std::string &stringREF = strVar;

       // Print memory addresses
//    std::cout << "\n\nMemory address of the string variable: " << std::hex << &strVar << std::endl;
//    std::cout << "Memory address held by stringPTR:     " << std::hex << stringPTR << std::endl;
//    std::cout << "Memory address held by stringREF:     " << std::hex << &stringREF << std::endl;

//    // Print values
//    std::cout << "\n\nValue of the string variable:   " << strVar << std::endl;
//    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
//    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
//     std::cout << "We drank mixue shampoo just now" << std::endl;

    cout << "Address: " << &strVar << endl;
	cout << "Address: " << stringPTR << endl;
	cout << "Address: " << &stringREF << endl;
    cout << stringREF << endl;
    printf("Address: %p\n", strVar.c_str());
	printf("Address: %p\n", stringPTR);
    printf("Address: %p\n", &stringREF);
}