#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>

using std::cout;
using std::endl;
using std::string;

struct Data {
    int id;
    string name;
    double value;

    Data(int _id, string _name, double _value): id(_id), name(_name), value(_value) {}
};

class Serializer
{
    private:
        Serializer();
    public:
        static uintptr_t serializer(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif 