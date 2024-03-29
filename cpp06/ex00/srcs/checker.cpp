#include "../headers/casting.hpp"

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
