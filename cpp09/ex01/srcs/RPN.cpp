#include "../headers/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other)
{
    *this = other;
}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        this->_operants = other._operants;
    return (*this);
}

void RPN::evaluate(string expression)
{
    (void)expression;
    cout << expression << endl;
}

void RPN::isValueValid(string expression)
{
	(void)expression;
}