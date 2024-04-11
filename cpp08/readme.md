CPP08 is about templated containers, iterators, and algorithms in C++

# Standard Template Library

The C++ Standard Template Library (STL) is a collection of algorithms, data structure, amd other components that can be used to simplify the development of C++ programs.

One of the key benefits of the STL is that it provides a way to write generic, reusable code that can be applied to different data types.


The STL include these components:

1. Containers

The containers include such as vector, list, map, set, and stack, which can be used to store and manipulate data.

2. Algorithms

The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.

3. Iterators

The iterators are objects that provide a way to traverse the elements of container. The STL provides a range of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator

4. Function Objects

Function objects, also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm, allowing you to customize its behavior.

5. Adapters

Adapters are components that modify the behavior of other components in the STL. For example,the reverse_iterator adapter can be used to reverse the order of elements in a container.

## Containers

Containers or container classes store objects and data. There are in total seven standards “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.


- ***Sequence Containers***: implement data structures that can be accessed in a sequential manner.
    - vector 
    - list 
    - deque
    - arrays
    - forward_list (introduced in C++11)

- ***Container Adaptors***: provide a different interface for sequential containers.
    - queue (FIFO)
    - priority_queue
    - stack (FILO)

- ***Associative Containers***: implement sorted data structures that can be quickly searched (O(log n) complexity).
    - set
    - multiset
    - map
    - multimap

- ***Unordered Associative Containers***: implement unordered data structures that can be quickly searched
    - unorder_set (Introduced in C++11)
    - unorder_mutliset (Introduced in C++11)
    - unorder_map (Introduced in C++11)
    - underorder_multimap (Introduced in C++11)


### The difference between order associative containers and unorder associative containers



[Containers diagram 1](https://media.geeksforgeeks.org/wp-content/uploads/20191111161536/Screenshot-from-2019-11-11-16-13-18.png)

[Container diagram 2](https://media.geeksforgeeks.org/wp-content/uploads/20191111161627/Screenshot-from-2019-11-11-16-15-07.png)