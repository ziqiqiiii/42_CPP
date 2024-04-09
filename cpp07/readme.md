# Templates in C++

A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 
C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

---
## How Do Templates Work?
Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type-checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class. 

---
## Function Templates vs Class Templates

In summary, function templates are used for writing generic functions, while class templates are used for writing generic classes. They both provide a way to write reusable code that can work with different types.

### Function Templates

- Function templates allow you to define a blueprint for a function that can work with any data type.
- You specify the types of parameters and return values using template parameters.
- When you use a function template, the compiler generates code for the function for each combination of types you use it with.
- Function templates are commonly used for generic algorithms that need to work with different types of data, such as sorting algorithms or mathematical operations.
- Example of a function template in C++:

```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
```

### Class Templates

- Class templates allow you to define a blueprint for a class where one or more types can be specified as parameters.
- These parameters can then be used within the class definition.
- When you instantiate a class template, you provide specific types for the template parameters, and the compiler generates a concrete class based on those types.
- Class templates are commonly used for creating generic data structures, such as containers like lists, stacks, or trees, that can hold elements of any specified type.
- Example of a class template in C++:

```cpp
template <typename T>
class Stack {
private:
    vector<T> elements;
public:
    void push(T const& element) {
        elements.push_back(element);
    }
    T pop() {
        if (elements.empty()) {
            throw out_of_range("Stack<>::pop(): empty stack");
        }
        T element = elements.back();
        elements.pop_back();
        return element;
    }
};
```

---

## What is the difference between function overloading and templates? 
Both function overloading and templates are examples of polymorphism features of OOP. Function overloading is used when multiple functions do quite similar (not identical) operations, templates are used when multiple functions do identical operations.

---