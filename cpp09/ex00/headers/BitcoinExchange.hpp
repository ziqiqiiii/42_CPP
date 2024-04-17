#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <exception>
#include <string>
#include <algorithm>
#include <map>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::map;


class BitcoinExchnage
{
    private:
        map<string, double> _exchangeRate;
    public:
        BitcoinExchnage();
        BitcoinExchnage(const string& filename);
        BitcoinExchnage(const BitcoinExchnage& other);
        BitcoinExchnage& operator=(const BitcoinExchnage& other);
        ~BitcoinExchnage();


};

#endif