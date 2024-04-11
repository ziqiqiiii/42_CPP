#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cerr;

template <typename T>
T min( T &a, T &b ) {
	return (a < b ? a : b);
}

template <typename T>
T max ( T &a, T &b ) {
	return (a > b ? a : b);
}

template <typename T>
void swap ( T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

#endif