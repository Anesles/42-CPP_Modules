#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& dbFile) {
    loadDatabase(dbFile);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string& dbFile) {
    std::ifstream file(dbFile.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    bool isFirstLine = true;
    while (std::getline(file, line)) {
        if (isFirstLine) {
            isFirstLine = false;
            continue;
        }
        std::istringstream ss(line);
        std::string date;
        std::string rateStr;
        if (std::getline(ss, date, ',') && std::getline(ss, rateStr)) {
            std::stringstream rateStream(rateStr);
            float rate;
            rateStream >> rate;
            if (rateStream.fail()) {
                std::cerr << "Error: invalid rate => " << rateStr << std::endl;
            } else {
                exchangeRates[date] = rate;
            }
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
}

float BitcoinExchange::getExchangeRate(const std::string& date) {
    std::map<std::string, float>::iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end() || it->first != date) {
        if (it != exchangeRates.begin()) {
            --it;
        }
    }
    return it->second;
}

void BitcoinExchange::evaluate(const std::string& inputFile) {
    std::ifstream file(inputFile.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    bool isFirstLine = true;
    while (std::getline(file, line)) {
        if (isFirstLine) {
            isFirstLine = false;
            continue;
        }
        std::istringstream ss(line);
        std::string date, valueStr;
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
            
            date.erase(date.find_last_not_of(" \n\r\t") + 1);
            valueStr.erase(0, valueStr.find_first_not_of(" \n\r\t"));

            std::stringstream valueStream(valueStr);
            float value;
            valueStream >> value;
            if (valueStream.fail() || value < 0 || value > 1000) {
                std::cerr << "Error: invalid value => " << valueStr << std::endl;
                continue;
            }
            float rate = getExchangeRate(date);
            std::cout << date << " => " << value << " = " << value * rate << std::endl;
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
}