This exercise is to create a stack class template that's iterable.
The default std::stack is non-iterable.
So, we created a class called MutantStack.
MutantStack inherits from std::stack and provides access to the underlying container through the c member.
It then defines iterator types and provides begin() and end() functions to enable iteration over the stack's elements.