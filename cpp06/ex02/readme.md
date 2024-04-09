# Dynamic Casting (dynamic_cast)

In C++, dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.

Downcasting
- Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting.

Upcasting
- Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting.

![Downcasting and Upcasting](https://media.geeksforgeeks.org/wp-content/uploads/20210506174912/one-300x131.png)
