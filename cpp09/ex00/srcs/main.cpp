#include "../headers/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Error: Please provide an input file." << std::endl;
        return EXIT_FAILURE;
    }
    string inputFilename = argv[1];
    BitcoinExchange bitcoinExchange;
    
    bitcoinExchange.readInput(inputFilename);
    
    (void)argv;
    (void)argc;
    return EXIT_SUCCESS;
}   