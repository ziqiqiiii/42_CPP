# Serializer and Deserializer

More Information = https://hazelcast.com/glossary/serialization/

--- 
# Reinterpret Cast (reinterpret_cast)

- Provides a low-level cast that allows you to convert any pointer type to any other pointer type or any integral type to any pointer type.
- It is very powerful and can be dangerous if used incorrectly, as it bypasses type safety checks.

```cpp
int* intptr;
char* charptr = reinterpret_cast<char*>(intptr); // Convert int* to char*

```
# uniptr_t 

**uintptr_t** is an unsigned integer type that is capable of storing a data pointer (whether it can hold a function pointer is unspecified). Which typically means that it's the same size as a pointer.

