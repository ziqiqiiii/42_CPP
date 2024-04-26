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

int RPN::evaluate(string expression)
{
    std::istringstream iss(expression);
    string token;

    while (iss >> token) {
        //Check whether is number or not (Positive && Negative)
        if (std::isdigit(token[0]) || (token.size() > 1 && token[0] == '-'))
            this->_operants.push(std::atoi(token.c_str()));
        else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (this->_operants.size() < 2) {
                throw std::runtime_error("Error");
            }
            int val2 = this->_operants.top(); this->_operants.pop();
            int val1 = this->_operants.top(); this->_operants.pop();
            this->_operants.push(applyOperation(val1, val2, token[0]));
        }
        else {
            throw std::runtime_error("Invalid token or operator.");
        }
    }
    if (this->_operants.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }
    return this->_operants.top();
}

int RPN::applyOperation(int a, int b, char op) {
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
        default:
            throw std::runtime_error("Invalid operator");
    }
}