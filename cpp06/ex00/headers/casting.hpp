#ifndef CASTING_HPP
#define CASTING_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

class Cast {
    private:
        Cast () {}
    public:
        static void convert(const string &str);
};
#endif