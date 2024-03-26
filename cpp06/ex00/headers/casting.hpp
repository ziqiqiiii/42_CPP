#ifndef CASTING_HPP
#define CASTING_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <limits>
#include <cstring>

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
        //checker
        static bool checkChar(const string &str);
        static bool checkNan(const string &str);
        static bool checkInf(const string &str);
        static bool checkInt(const string &str);
        static bool checkFloat(const string &str);
        static bool checkDouble(const string &str);

        //checker
        static void printChar(const string &str);
        static void printNan();
        static void printInf(const string &str);
        static void printInt(const string &str);
        static void printFloat(const string &str);
        static void printDouble(const string &str);
    public:
        static void convert(const string &str);
};
#endif