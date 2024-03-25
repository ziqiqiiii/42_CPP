#ifndef CASTING_HPP
#define CASTING_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <limits>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

enum s_type 
{
    CHAR,
    NAN,
    INF,
    INT,
    FLOAT,
    DOUBLE,
    INVALID,
};

class Cast {
    private:
        Cast ();
        static bool checkChar(const string &str);
        static bool checkNan(const string &str);
        static bool checkInf(const string &str);
        static bool checkInt(const string &str);
        static bool checkFloat(const string &str);
        static bool checkDouble(const string &str);
    public:
        static void convert(const string &str);
};
#endif