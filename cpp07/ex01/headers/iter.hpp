#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::cerr;

template<typename T, typename Func>
void iter(T *array, int length, Func func){
    for (int i = 0; i < length; i++) {
        func(array[i]);
    }
}

template<typename T>
void print(const T& element) {
    cout << element << " ";
}

template<typename T>
void add2(const T& element) {
    element += 2;
}

template<typename T>
void multiply2(const T& element) {
    element *= 2;
}

#endif