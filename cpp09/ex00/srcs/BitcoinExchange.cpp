#include "../headers/BitcoinExchange.hpp"


//ORTHODOX COCANICAL FORM
BitcoinExchange::BitcoinExchange() {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        cerr << "Error: could not open file." << endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date, exchange_rate;
        size_t commaPos = line.find(',');
        if (commaPos == std::string::npos) {
            std::cerr << "Error: Invalid format in line: " << line << std::endl;
            continue;
        }
        exchange_rate = line.substr(commaPos + 1);
        date = line.substr(0, commaPos);
        double double_exchangeRate;
        double_exchangeRate = std::strtod(exchange_rate.c_str(), NULL);
        this->_exchangeRate[date] = double_exchangeRate;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    this->_exchangeRate = other._exchangeRate;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other) {
        this->_exchangeRate = other._exchangeRate;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

//OTHER MEMBER FUNCTIONS
void BitcoinExchange::readInput(const string& inputFile) 
{
    std::ifstream file(inputFile.c_str());
    if (!file.is_open()) {
        cerr << "Error: could not open file." << std::endl;
        exit(EXIT_FAILURE);
    }
    string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        string dateStr, pipe ,valueStr;
        if (!(iss >> dateStr >>  pipe >> valueStr)) {
            cerr << "Error: bad input => " << line << endl;
            continue ;
        }
        try {
            double value = std::strtod(valueStr.c_str(), NULL);
            isValueValid(value);
            isDateValid(dateStr);
            // double exchangeRate = getExchangeRate(dateStr);
            // if (exchangeRate == -1.0) {
            //     std::cerr << "Error: Exchange rate not found for date " << dateStr << std::endl;
            //     continue;
            // }
            // double result = value * exchangeRate;
            // std::cout << dateStr << " => " << value << " = " << std::fixed << std::setprecision(2) << result << std::endl;
            cout << dateStr << " => " << valueStr << endl;
        } catch (const std::exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
}

void BitcoinExchange::isValueValid(double value)
{
    if (value <= 0)
        throw BitcoinExchange::valueNotPositive();
    else if (value >= INT_MAX)
        throw BitcoinExchange::valueTooLarge();
    else if (value <= INT_MIN)
        throw BitcoinExchange::valueTooSmall();
}

void BitcoinExchange::isDateValid(string dateStr) {
    std::istringstream iss(dateStr);
    char delimiter;
    int year, month, day;

    if (!(iss >> year >> delimiter >> month >> delimiter >> day)) {
        throw BitcoinExchange::dateIsNotValid();
    }
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        throw BitcoinExchange::dateIsNotValid(); 
    }
    if (month == 2 && day > 29) {
        throw BitcoinExchange::dateIsNotValid();
    }
}
