#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

template<typename T, typename Func>
void iter(T *array, int length, Func func){
    for (int i = 0; i < length; i++) {
        func(array[i]);
    }
}

template<typename T>
void print(const T& element) {
    cout << std::fixed << std::setprecision(1) << element << " ";
}

template<typename T>
void add2(T& element) {
    element += 2;
}

template<typename T>
void multiply2(T& element) {
    element *= 2;
}

#endif