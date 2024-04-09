#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::cerr;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
};

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
};

#endif 