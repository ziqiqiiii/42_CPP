#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::vector;

class Span {
    private:
        unsigned int _size;
        std::vector<int> _numbers;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int num);
        void addNumber(vector<int>::iterator begin, vector<int>::iterator end);
        int shortestSpan(void) const;
        int longestSpan(void) const;

        class SpanIsFull: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Span is full. Cannot add more numbers.";
                }
        };

        class NotEnoughSpace: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Not enough space in Span to add all numbers.";
                }
        };

        class SpanTooShort: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Cannot find span or Insufficient number of elements.";
                }
        };

};

#endif