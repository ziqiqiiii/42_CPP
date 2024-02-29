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

void str_tolower(char **str)
{
    for (char *p = *str; *p != '\0'; p++)
    {
        *p = tolower(*p);
        str++;
    }
}

int main(int argc, char **argv)
{
    Harl example;
    cout << "harlFilter" << endl;
    if (argc != 2)
    {
        std::cerr << "Error: invalid input number";
        return (1);
    }
    str_tolower(&argv[1]);
    example.complain(argv[1]);
    cout << endl;
    return (0);
}