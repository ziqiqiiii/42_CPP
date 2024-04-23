#include "../headers/RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        cerr << "Error: invalid number of arguments" << endl;
        return EXIT_FAILURE;
    }
    RPN rpn;

    rpn.evaluate(argv[1]);
    return EXIT_SUCCESS;
}   