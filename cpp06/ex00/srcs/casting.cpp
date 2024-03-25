#include "../headers/casting.hpp"

void Cast::convert(const string &str)
{
    int num = std::atoi(str.c_str());
    char c = num;

    // Disaplayable characters are from 32 <= && >= 126
    if (num == 0 && !isdigit(str[0]))
        cout << "char   : imposible" << endl;
    else if (isprint(c))
        std::cout << "char   : '" << c << "'" << std::endl;
    else 
        std::cerr << "char   : Non displayable" << std::endl;
    
    cout << "int    : " << num << endl;
    cout << "float  : " << std::fixed << std::setprecision(1) << std::atof(str.c_str());
    cout << "f" << endl;
    cout << "double : " << std::strtod(str.c_str(), NULL) << endl;
}