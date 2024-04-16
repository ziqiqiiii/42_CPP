#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

using std::cout;
using std::endl;
using std::cerr;

template<typename T>
class MutantStack: public std::stack<T, std::deque<T>> {
    public:

        using typename std::stack<T, std::deque<T>>::container_type; //The underlying container
        using typename container_type::iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif