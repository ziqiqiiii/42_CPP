#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

template <typename T>
class Array {
    private:
        T* _elements;
        unsigned int _arraySize;
    public:
        //default constructor
        Array<T>(){
            this->_elements = new T[0];
            this->_arraySize = 0;
        }
        // constructor
        Array<T>(unsigned int n)
        {
            this->_elements = new T[n];
            this->_arraySize = n;
        }
        // copy constructor
        Array<T>(const Array& other)
        {
            this->_arraySize = other._arraySize;
            this->_elements = new T[other._arraySize];
            for (unsigned int i = 0; i < other._arraySize; i++){
                    this->_elements[i] = other._elements;
            }
        }
        // assignment operator
        Array<T>& operator=(const Array& other)
        {
            if (this != &other)
            {
                this->_arraySize = other._arraySize;
                this->_elements = new T[other._arraySize];
                for (unsigned int i = 0; i < other._arraySize; i++){
                    this->_elements[i] = other._elements;
            }
            }
            return (*this);
        }
        // destructor
        ~Array<T>(){
            delete[] this->_elements;
        }


};

#endif