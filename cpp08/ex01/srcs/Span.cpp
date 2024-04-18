#include "../headers/Span.hpp"

Span::Span() {}

Span::Span(unsigned int n): _size(n)
{

}

Span::Span(const Span& other)
{
    *this = other;
}


Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_size = other._size;
        this->_numbers = other._numbers;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
    if (this->_numbers.size() >= this->_size)
        throw SpanIsFull();
    this->_numbers.push_back(num);
}

void Span::addNumber(vector<int>::iterator begin, vector<int>::iterator end)
{
    unsigned int remainingSpace = this->_size - this->_numbers.size();
    unsigned int inputSize = std::distance(begin, end);

    if (inputSize > remainingSpace) {
        throw NotEnoughSpace();
    }
    this->_numbers.insert(_numbers.end(), begin, end);
}

int Span::shortestSpan(void) const
{
    if (this->_numbers.size() <= 1)
        throw SpanTooShort();
    std::vector<int> temp(this->_numbers.begin(), this->_numbers.end());
    std::sort(temp.rbegin(), temp.rend());
    int shortest = temp[0] - temp[1];
    for (int i = 0; i < static_cast<int>(temp.size()); i++)
    {
        for (int j = i + 1; j < static_cast<int>(temp.size()); j++)
        {
            if (i != j)
            {
                int tmp = temp[i] - temp[j];
                if (tmp < shortest)
                    shortest = tmp;
            }
        }
    }
    return shortest;
    
}

int Span::longestSpan(void) const
{
    if (this->_numbers.size() <= 1)
        throw SpanTooShort();
    std::vector<int> temp(_numbers.begin(), _numbers.end());
    std::sort(temp.rbegin(), temp.rend());
    int longest = temp[0] - temp[1];
    for (int i = 0; i < static_cast<int>(temp.size()); i++)
    {
        for (int j = i + 1; j < static_cast<int>(temp.size()); j++)
        {
            if (i != j)
            {
                int tmp = temp[i] - temp[j];
                if (tmp > longest)
                    longest = tmp;
            }
        }
    }
    return longest;
}

const vector< int >* Span::getVector( void ) const {
    return &this->_numbers;
}

std::ostream& operator<<( std::ostream& os, const Span& span ) {
    for ( vector<int>::const_iterator it = span.getVector()->begin(); it != span.getVector()->end(); ++it )
        os << *it << " ";
    return os;
}