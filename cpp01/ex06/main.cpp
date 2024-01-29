#include "Harl.hpp"

int str_to_int(char *line)
{
    if (strncmp(line, "debug", strlen(line)) == 0)
        return (1);
    else if (strncmp(line, "info", strlen(line)) == 0)
        return (2);
    else if (strncmp(line, "warning", strlen(line)) == 0)
        return (3);
    else if (strncmp(line, "error", strlen(line)) == 0)
        return (4);
    else
        return (0);
}

void str_tolower(char *str)
{
    for (char *p = str; *p != '\0'; p++)
        *p = tolower(*p);
}
int main(int argc, char **argv)
{
    Harl example;
    cout << "\nharlFilter" << endl;
    if (argc != 2)
    {
        std::cerr << "Error: invalid input number";
        return (1);
    }
    str_tolower(argv[1]);
    switch(str_to_int(argv[1]))
    {
        case 1:
            example.complain("debug");
            break ;
        case 2:
            example.complain("info");
            break ;
        case 3:
            example.complain("warning");
            break ;
        case 4:
            example.complain("error");
            break;
        default:
            cout << "Probably complaining about insignificant problems" << endl;
    }
    cout << endl;
    return (0);
}