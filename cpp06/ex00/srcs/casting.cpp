#include "../headers/casting.hpp"

Cast::Cast() {}

bool Cast::checkChar(const string &str)
{
    if (str.size() == 1 && !std::isdigit(str.c_str()[0]))
        return 1;
    return 0;
}

bool Cast::checkNan(const string &str)
{
    if (str == "nan" || str == "nanf")
        return 1;
    return 0;
}

bool Cast::checkInf(const string &str)
{
    if (str == "inf" || str == "+inf" || str == "-inf" || \
        str == "inff" || str == "+inff" || str == "-inff")
        return 1;
    return 0;
}

bool Cast::checkInt(const string &str)
{
    if (str.empty())
        return false;
    size_t start_index = 0;
    if (str[0] == '-' || std::isdigit(str[0]))
        start_index = 1;
    else
        return false;
    for (size_t i = start_index; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

bool Cast::checkFloat(const string &str)
{
    if (str.empty())
        return false;
    size_t start_index = 0;
    if (str[0] == '-' || str[0] == '.' || std::isdigit(str[0]))
        start_index = 1;
    else
        return false;
    bool hasDecimalPoint = false;
    bool hasSuffix = false;
    for (size_t i = start_index; i < str.length(); i++) {
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != 'F')
            return false;
        if (str[i] == '.') {
            if (hasDecimalPoint)
                return false;
            hasDecimalPoint = true;
        }
        if (str[i] == 'f' || str[i] == 'F') {
            if (hasSuffix) {
                return false;
            }
            hasSuffix = true;
        }
    }
    if (hasDecimalPoint && hasSuffix)
        return true;
    return false;
}

bool Cast::checkDouble(const string &str)
{
    if (str.empty())
        return false;
    size_t start_index = 0;
    if (str[0] == '-' || str[0] == '.' || std::isdigit(str[0]))
        start_index = 1;
    else
        return false;
    bool hasDecimalPoint = false;
    bool hasExponent = false;
    for (size_t i = start_index; i < str.length(); i++) {
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'e' && \
            str[i] != 'E' && str[i] != '+' && str[i] != '-')
            return false;
        if (str[i] == '.') {
            if (hasDecimalPoint)
                return false;
            hasDecimalPoint = true;
        }
        if (str[i] == 'e' || str[i] == 'E') {
            if (hasExponent)
                return false;
            hasExponent = true;
            i++;
            if (i == str.length() || (!std::isdigit(str[i]) && str[i] != '+' && str[i] != '-'))
                return false;
        }
    }
    return true;
}

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

    cout << "type : " << type << endl;

    char c = str.c_str()[0];
    int i = std::atoi(str.c_str());
    switch (type)
    {
        case CHAR: {
            if (std::isprint(c))
                std::cout << "char   : '" << c << "'" << std::endl;
            else 
                std::cerr << "char   : Non displayable" << std::endl; 
            std::cout << "int    : "  << static_cast<int>(c) << endl;
            std::cout << "float  : "  << static_cast<float>(c) << endl;
            std::cout << "double : "  << static_cast<double>(c) << endl;
            break ;           
        }
        case NAN: {
            cout << "char   : impossible" << endl;
            cout << "int    : impossible" << endl;
            cout << "float  : nanf" << endl;
            cout << "double : nan" << endl;
            break ;
        }
        case INF: {
            cout << "char   : impossible" << endl;
            cout << "int    : impossible" << endl;
            cout << "float  : " << std::fixed << std::setprecision(1) << std::atof(str.c_str());
            cout << "f" << endl;
            cout << "double : " << std::strtod(str.c_str(), NULL) << endl;
            break ;
        }
        case INT: {

            long int check = strtol(str.c_str(), NULL, 10);
            if (check < INT_MIN || check > INT_MAX) {
                cerr << "Error: input is an INT, but overflowed" << endl;
                break ;
            }
            i = check;
            if (i >= CHAR_MIN && i <= CHAR_MAX) {
                if (isprint(i))
                    std::cout << "char   : '" << static_cast<char>(i) << "'" << std::endl;
                else 
                    std::cerr << "char   : Non displayable" << std::endl;
            }
            else {
                cout << "char   : impossible" << endl;
            }
            std::cout << "int    : "  << static_cast<int>(i) << endl;
            std::cout << "float  : "  << static_cast<float>(i);
            if (i < 1000000)
                cout << ".0f" << endl;
            else
                cout << "f" << endl;
            std::cout << "double : "  << static_cast<double>(i) << endl;
            if (i < 1000000)
                cout << ".0" << endl;
            else
                cout << endl;
            break ;
        }
        case FLOAT: {
            break ;
        }
        case DOUBLE: {
            break ;
        }
        default:
            cout << "Error: Input that doesn't make sense" << endl;
            break ;
            
    }

    // // Disaplayable characters are from 32 <= && >= 126
    // if (num == 0 && !isdigit(str[0]))
    //     cout << "char   : imposible" << endl;
    // else if (isprint(c))
    //     std::cout << "char   : '" << c << "'" << std::endl;
    // else 
    //     std::cerr << "char   : Non displayable" << std::endl;
    
    // cout << "int    : " << num << endl;
    // cout << "float  : " << std::fixed << std::setprecision(1) << std::atof(str.c_str());
    // cout << "f" << endl;
    // cout << "double : " << std::strtod(str.c_str(), NULL) << endl;
}