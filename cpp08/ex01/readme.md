# What is the difference between vector, dequeue, and list 

1. Vector: 
A vector is a dynamic array that can grow or shrink in size as needed. 
It provides fast random access to elements, but insertion and deletion at the end is also fast. 
It is implemented as a dynamic array, which means that its elements are stored in contiguous memory locations. 
Vectors have the advantage of being very efficient in terms of cache utilization and therefore, they are very fast for sequential access.

2. Deque: 
A deque (short for "double-ended queue") is a container that can grow or shrink in size at both ends. 
It provides fast random access to elements, but insertion and deletion at either end is also fast. 
It is implemented as a dynamic array of fixed-size arrays, which means that its elements are stored in non-contiguous memory locations. 
Deques are useful when you need to efficiently insert or remove elements at both ends of the container, but less efficient than vectors for random access.

3. List: 
A list is a container that can grow or shrink in size in the middle. 
It provides slow random access to elements, but fast insertion and deletion at any point. 
It is implemented as a doubly linked list, which means that its elements are stored in non-contiguous memory locations and each element has pointers to the next and previous elements. 
Lists are useful when you need to efficiently insert or remove elements in the middle of the container.


***In summary***, vector is efficient in terms of cache utilization and random access, deque is efficient for insertion and deletion at both ends, and list is efficient for insertion and deletion in the middle.