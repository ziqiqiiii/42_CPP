#include <iostream>
#include <cctype>  // For toupper function

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;  // Exit with an error code
    }

    for (int i = 1; i < argc; ++i) {
        for (char *ptr = argv[i]; *ptr != '\0'; ++ptr) {
            std::cout << (char)toupper(*ptr);
        }
        std::cout << ' ';
    }

    std::cout << std::endl;

    return 0;  // Exit successfully
}