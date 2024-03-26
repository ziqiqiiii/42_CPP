#include "../headers/casting.hpp"

void Cast::printChar(const string &str)
{
    char c = str.c_str()[0];
    if (std::isprint(c))
        std::cout << "char   : '" << c << "'" << std::endl;
    else 
        std::cerr << "char   : Non displayable" << std::endl; 
    std::cout << "int    : "  << static_cast<int>(c) << endl;
    std::cout << "float  : "  << static_cast<float>(c) << endl;
    std::cout << "double : "  << static_cast<double>(c) << endl;
}

void Cast::printNan()
{
    cout << "char   : impossible" << endl;
    cout << "int    : impossible" << endl;
    cout << "float  : nanf" << endl;
    cout << "double : nan" << endl;
}

void Cast::printInf(const string &str)
{
    cout << "char   : impossible" << endl;
    cout << "int    : impossible" << endl;
    cout << "float  : " << std::fixed << std::setprecision(1) << std::atof(str.c_str());
    cout << "f" << endl;
    cout << "double : " << std::strtod(str.c_str(), NULL) << endl;
}

void Cast::printInt(const string &str)
{
    long int check = strtol(str.c_str(), NULL, 10);
    int i = std::atoi(str.c_str());
    if (check < INT_MIN || check > INT_MAX) {
        cerr << "Error: input is an INT, but overflowed" << endl;
        return ;
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
    std::cout << "double : "  << static_cast<double>(i);
    if (i < 1000000)
        cout << ".0" << endl;
    else
        cout << endl;
}

void Cast::printFloat(const string &str)
{
    int i = std::atoi(str.c_str());
    long int check = strtol(str.c_str(), NULL, 10);
    if (check < INT_MIN || check > INT_MAX) {
        cerr << "Error: input is an INT, but overflowed" << endl;
        return ;
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
    cout << "int    : " << static_cast<int>(i) << endl;
    std::cout << "float  : "  << static_cast<float>(i);
    if (i < 1000000)
        cout << ".0f" << endl;
    else
        cout << "f" << endl;
    std::cout << "double : "  << static_cast<double>(i);
    if (i < 1000000)
        cout << ".0" << endl;
    else
        cout << endl;
}

void Cast::printDouble(const string &str)
{
    long int check = strtol(str.c_str(), NULL, 10);
        if (check < INT_MIN || check > INT_MAX) {
            cerr << "Error: input is an INT, but overflowed" << endl;
            return ;
        }
        double a = std::strtod(str.c_str(), NULL);
        const char *hasDecimal = std::strchr(str.c_str(), '.');
        const char *hasexponential = std::strchr(str.c_str(), 'e');
        const char *hasExponential = std::strchr(str.c_str(), 'E');
        if (a >= CHAR_MIN && a <= CHAR_MAX) {
            if (isprint(a))
                std::cout << "char   : '" << static_cast<char>(a) << "'" << std::endl;
            else 
                std::cerr << "char   : Non displayable" << std::endl;
        }
        else {
            cout << "char   : impossible" << endl;
        }
        cout << "int    : " << static_cast<int>(a) << endl;
        std::cout << "float  : "  << static_cast<float>(a);
        if (a < 1000000 && (!hasDecimal || (hasexponential || hasExponential)))
            cout << ".0f" << endl;
        else
            cout << "f" << endl;
        std::cout << "double : "  << a;
        if (a < 1000000 && (!hasDecimal || (hasexponential || hasExponential)))
            cout << ".0" << endl;
        else
            cout << endl;
}
