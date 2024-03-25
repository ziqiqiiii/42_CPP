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
    for (size_t i = start_index; i < str.length(); i++) {
        if (!std::isdigit(str[i]) && str[i] != '.')
            return false;
        if (str[i] == '.') {
            if (hasDecimalPoint)
                return false;
            hasDecimalPoint = true;
        }
    }
    return true;
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
    s_type type;
    
    type = INVALID;
    for (int i = 0; i < 6; i++){
        if (checker[i](str) == 1){
            type = static_cast<s_type>(i);
            break ;
        }
    }
    cout << "type : " << type << endl;
    // int num = std::atoi(str.c_str());
    // char c = num;

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