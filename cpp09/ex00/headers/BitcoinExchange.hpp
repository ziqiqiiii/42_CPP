#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <exception>
#include <string>
#include <algorithm>
#include <map>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::map;


class BitcoinExchange
{
    private:
        map<string, double> _exchangeRate;
    public:
        //=========================
        //ORTHODOX COCANICAL FORM
        //=========================
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        //=========================
        //MEMBER FUNCTION
        //=========================
        void readInput(const string& inputFile);
        double geteExchangeRate(const string date);
        // checker
        void isValueValid(string valueStr);
        void isDateValid(string dateStr);
        void isHeaderValid(string line);

        //=========================
        //EXCEPTION ERRORS
        //=========================
        class valueIsNotValid: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "value is not valid" ;
                }
        };

        class valueNotPositive: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "not a positive number." ;
                }
        };

        class valueTooLarge: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "too large a number." ;
                }
        };

        class valueTooSmall: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "too small a number." ;
                }
        };

        class dateIsNotValid: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "date is not valid." ;
                }
        };

        class invalidHeader: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "header is not valid." ;
                }
        };
};

#endif