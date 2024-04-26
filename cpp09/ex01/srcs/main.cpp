#include "../headers/RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        cerr << "Error: invalid number of arguments" << endl;
        return EXIT_FAILURE;
    }
    try {
        RPN rpn;
        cout << rpn.evaluate(argv[1]) << endl;
    } catch (const std::exception& e) {
        cerr << e.what() << endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}   