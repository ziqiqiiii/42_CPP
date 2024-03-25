#include "../headers/casting.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cerr << "Error: wrong argument" << endl;
        return 1;
    }
    Cast::convert(argv[1]);
    return 0;
}