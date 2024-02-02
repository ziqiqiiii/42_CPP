# Operator Overloading

Operator overloading is one of the best features of C++. 
By overloading the operators, we can give additional meaning to the operators like +-*/=.,= etc., 
which by default are supposed to work only on standard data types like int, float, char, void etc. 
It is an essential concept in C++. 
It’s a type of polymorphism in which an operator is overloaded to give it the user-defined meaning.

## Type of operator overloading

1. Function Overloading
    The process of having two or more functions with the same name but with different parameters (arguments) is called function overloading. The function is redefined by either using different types of arguments or a different number of arguments. It is only through these differences that a compiler can differentiate between functions.
2. Operator Overloading
    In C++, it can add special features to the functionality and behaviour of already existing operators like athematic and other operations. The mechanism of giving special meaning to an operator is known as operator overloading. For example, we can overload an operator ‘+’ in a class-like string to concatenate two strings by just using +. 

## Operations that can be performed:
Athematic operations: + – * / %
Logical operations:  && and ||
Relational operations: == != >= <=
Pointer operators: & and *
Memory management operator: new, delete []

## Implementing Operator overloading:
Member function: It is in the scope of the class in which it is declared.
Friend function: It is a non-member function of a class with permission to access both private and protected members. 