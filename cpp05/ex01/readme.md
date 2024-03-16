# Exception class

In C++, an exception class is a special kind of class used for handling unexpected events or errors that occur during program execution. It provides a structure way to signal and manage these errors, preventing program crashes and improving code maintainability.

Here's a breakdown of key concepts:

## Throwing Exceptions:

The throw keyword is used within a function to signal an exceptional condition. It's followed by an expression that specifies the type of the exception being thrown. This expression can be a literal value, an object, or even another exception.
Exception Types:

Exception classes define the types of exceptions your program can throw. They typically inherit from the base class std::exception provided by the C++ standard library.

Custom Exception Classes: You can create your own exception classes to represent specific error conditions in your program. These classes can contain additional information about the error, beyond a simple message.

## Catching Exceptions:

The try-catch block is used to handle exceptions.
The try block encloses the code that might throw an exception.
The catch block defines how to handle the thrown exception. It specifies the type of exception it can handle (using parentheses after catch). If the thrown exception type matches the catch block, the code within that block executes to address the error.
Benefits of Using Exception Classes:

Improved Error Handling: Provides a structured way to handle unexpected errors, preventing program crashes and allowing for more specific handling of different error conditions.
Increased Code Readability: Separates error handling logic from the main code flow, making code easier to understand.
Enhances Maintainability: Makes error handling code easier to modify and test.

----
#  Why exception don't have to be OCF (Orthidox Canonical Form)

## OCF and Member Functions: 
OCF is indeed a design pattern that emphasizes private member variables and public member functions for data access, typically including a default constructor, a copy constructor, a destructor, and an overloaded assignment operator.

## Exception Classes and OCF: 
While OCF is generally a good practice for most classes, exception classes in C++ often deviate from it. The primary reasons are:

Simplicity: Exception classes are often designed to be lightweight and focused on providing an error message. Public member variables, like what, can be acceptable for direct access to the error information.
Performance: In some cases, avoiding getter functions for the error message might lead to slightly better performance, especially with frequent exception throws.
However, it's still recommended to follow some good practices for exception classes:

Derive from std::exception: This ensures compatibility with the standard exception handling mechanisms in C++.
Provide a meaningful what function: This function should return a human-readable error message describing the exception.
Consider const member functions: Since exceptions are typically thrown and caught by constant references, making the member functions const ensures they don't accidentally modify the exception object's state.