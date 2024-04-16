#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::cerr;

template<typename T>
class MutantStack: public std::stack<T, std::deque<T> > {
    public:
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(const MutantStack& other) { this = *other; };
        MutantStack& operator=(const MutantStack& other) {
            std::stack< T, std::deque<T> >::operator=( other );
            return *this;
        }

        typedef typename std::deque<T>::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif