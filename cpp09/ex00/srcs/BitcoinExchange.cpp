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
    try {
        BitcoinExchange::isHeaderValid(line);

    } catch (const std::exception &e) {
        cerr << "Error: " << e.what() << endl;
        return ;
    }
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        string dateStr, pipe ,valueStr;
        if (!(iss >> dateStr >>  pipe >> valueStr)) {
            cerr << "Error: bad input => " << line << endl;
            continue ;
        }
        try {
            isValueValid(valueStr);
            isDateValid(dateStr);
            double exchangeRate = BitcoinExchange::geteExchangeRate(dateStr);
            double value = std::strtod(valueStr.c_str(), NULL);
            cout << dateStr << " => " << valueStr << " = " << value * exchangeRate << endl;
        } catch (const std::exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
    file.close();
}

double BitcoinExchange::geteExchangeRate(const string date)
{
    map<string, double>::const_iterator it = this->_exchangeRate.find(date);

    if (it != this->_exchangeRate.end()){
        return it->second;
    } else {
        it = this->_exchangeRate.lower_bound(date);
        if (it == this->_exchangeRate.begin()) {
            return it->second;
        } else {
            --it;
            return it->second;
        }
    }
}

void BitcoinExchange::isValueValid(string valueStr)
{
    for (size_t i = 0; i < valueStr.length(); i++) {
        if (!std::isdigit(valueStr[i]))
            throw BitcoinExchange::valueIsNotValid();
    }
    double value = std::strtod(valueStr.c_str(), NULL);
    if (value <= 0)
        throw BitcoinExchange::valueNotPositive();
    else if (value > 1000)
        throw BitcoinExchange::valueTooLarge();
    else if (value < 0)
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
    else if (month == 2 && day > 29) {
        throw BitcoinExchange::dateIsNotValid();
    }
    else if ((month <= 7) && (month != 2 && month % 2 == 0)) {
        if (day > 30)
            throw BitcoinExchange::dateIsNotValid();
    }
    else if ((month >= 8) && (month % 2 == 1)) {
        if (day > 30)
            throw BitcoinExchange::dateIsNotValid();
    }
}

void BitcoinExchange::isHeaderValid(string line)
{
    std::istringstream issHeader(line);
    string dateHeader, pipe , valueHeader;

    if (!(issHeader >> dateHeader >> pipe >> valueHeader))
        throw BitcoinExchange::invalidHeader();
    else if (dateHeader != "date" || pipe != "|" || valueHeader != "value")
        throw BitcoinExchange::invalidHeader();
}
