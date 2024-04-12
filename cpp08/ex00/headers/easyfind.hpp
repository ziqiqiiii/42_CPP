#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <string>

#include <vector>
#include <list>
#include <deque>
// #include <array> // Introduced in C++11
// #include <forward_list> // Introduced in C++11

using std::cout;
using std::endl;
using std::cerr;
using std::string;

using std::vector;
using std::list;
using std::deque;

template<typename T>
typename T::iterator easyFind(T& t, int value)
{
    typename T::iterator result = std::find(t.begin(), t.end(),  value);
    if (result != t.end())
        throw std::invalid_argument("Value do not found in the container");
    return result;
}

#endif