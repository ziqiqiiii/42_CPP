## Allocation and Deallocation:

Stack:

Managed automatically by the compiler.
Follows a Last-In-First-Out (LIFO) principle, similar to a stack of plates.
Memory is allocated when a function is called and deallocated when the function returns.
Heap:

Managed manually by the programmer using functions like malloc and free (in C).
Offers dynamic allocation, meaning memory can be requested and released during program execution.
## Usage:

Stack:

Stores local variables of functions, function arguments, and the program's execution state (return addresses).
Designed for short-lived data as functions typically have a limited lifespan.
Heap:

Stores objects and dynamically allocated data structures (like linked lists and trees).
Suitable for data with a variable lifespan that may outlive the function where it was created.