# Ad-hoc Polymorphism: 
This refers to the ability of a function to take arguments of different types and behave differently depending on those types. In C++, ad-hoc polymorphism is typically achieved through function overloading and template specialization.

## Overloads: 
Function overloading is a feature in C++ that allows multiple functions with the same name but different parameters to be defined within the same scope. When you call an overloaded function, the compiler determines which version of the function to execute based on the arguments provided. Overloading enables ad-hoc polymorphism by allowing different implementations of a function to be used depending on the types and number of arguments passed.

Here's a simple example of function overloading in C++:

```cpp
Copy code
#include <iostream>

void print(int num) {
    std::cout << "Integer: " << num << std::endl;
}

void print(double num) {
    std::cout << "Double: " << num << std::endl;
}

int main() {
    print(5);
    print(3.14);
    return 0;
}
```

In this example, the print function is overloaded to handle both int and double arguments.