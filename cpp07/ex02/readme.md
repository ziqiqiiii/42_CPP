# Function Template iter

## Function Object vs Function Pointer

### Function Pointer Approach:
```cpp
template<typename T>
void iter(T *array, int length, void (*func)(T& elem));
```

This function template takes three parameters: a pointer to an array of type T, an integer representing the length of the array, and a function pointer.
The function pointer parameter func is expected to point to a function that takes a single reference parameter of type T and returns void.
This approach requires passing a function pointer explicitly when calling the iter function. The function pointer should match the signature specified in the template declaration.

### Function Object Approach:
```cpp
template<typename T, typename Func>
void iter(T* array, int length, Func func);
```

This function template also takes three parameters: a pointer to an array of type T, an integer representing the length of the array, and a function object.
The third parameter func is expected to be a function object (or functor) that can be called with a single parameter of type T.
This approach allows for more flexibility as the third parameter can be any type that satisfies the requirements of being callable with a single parameter of type T.
Function objects can encapsulate state, allowing for more complex behavior compared to function pointers.

### Key differences summarized:

- Flexibility: The function object approach offers more flexibility as it can accept any callable object (function pointers, function objects, lambdas, etc.) that meets the specified requirements. On the other hand, the function pointer approach only accepts function pointers with a specific signature.

- Complexity: Function objects can encapsulate state, allowing for more complex behavior and additional functionality compared to function pointers, which are simply pointers to functions.

- Ease of Use: Function objects might be easier to use in certain scenarios, especially when dealing with more complex behaviors or when the function needs access to additional data (state).

- Compile-Time Checking: Both approaches provide compile-time type checking, ensuring that the correct types are used for the function parameters. However, with the function object approach, the compiler checks the validity of the function object type at the point of instantiation, while with the function pointer approach, it checks the validity of the function pointer type at the point of calling the function.

In general, the choice between the two approaches depends on the specific requirements and design considerations of your application.


## How to use templates that used function object approach

Example of how to call function object:
```cpp
iter(intArray, intArrayLength, print<int>);
iter( tab, 5, print<int>);
iter( tab2, 5, print<Awesome>); //Awesome is an object
```

The compiler will be expanded into multiple copies depend on the data type it being called. 

Then, why are we bother to specify the data type for print<int> in this case ? 

In C++, **function template argument deduction works differently compared to template classes or functions with regular types**. When you pass a function pointer as an argument to a function template, the compiler doesn't deduce the type of the function pointer automatically because it's not part of the function's signature. Instead, you need to explicitly specify the type of the function pointer.

Let's consider the iter function template. It expects a function (or function object) that can be called with an argument of type T. When you pass a function pointer/function template like print as an argument to iter, the compiler needs to know the exact type of print in order to instantiate the template correctly.
