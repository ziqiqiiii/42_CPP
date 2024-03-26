#include "../headers/casting.hpp"

Cast::Cast() {}

void Cast::convert(const string &str)
{
    bool (*checker[6])(const string &str) = {Cast::checkChar, Cast::checkNan, Cast::checkInf, \
                                    Cast::checkInt, Cast::checkFloat, Cast::checkDouble};
    s_type type = INVALID;
    for (int i = 0; i < 6; i++){
        if (checker[i](str) == 1){
            type = static_cast<s_type>(i);
            break ;
        }
    }
    switch (type)
    {
        case CHAR: {
            Cast::printChar(str);
            break ;           
        }
        case NAN: {
            Cast::printNan();
            break ;
        }
        case INF: {
            Cast::printInf(str);
            break ;
        }
        case INT: {
            Cast::printInt(str);
            break ;
        }
        case FLOAT: {
            Cast::printFloat(str);
            break ;
        }
        case DOUBLE: {
            Cast::printDouble(str);
            break ;
        }
        default:
            cout << "Error: Input that doesn't make sense" << endl;
            break ;    
    }
}