#include "../headers/BitcoinExchange.hpp"

BitcoinExchnage::BitcoinExchnage() {}

BitcoinExchnage::~BitcoinExchnage() {}

BitcoinExchnage::BitcoinExchnage(const string& filename)
{
    if (filename == NULL) {
        cerr << "Error: could not open file." << endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        cerr << "Error: could not open file." << endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    std::getline(file, line); // Skip header
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date, exchange_rate;
        if (!(iss >> date >> exchange_rate)) {
            continue;
        }
        std::istringstream issValue(exchange_rate);
        double value;
        if (!(issValue >> value)) {
            continue;
        }
        this->_exchangeRate[date] = value;
    }
}