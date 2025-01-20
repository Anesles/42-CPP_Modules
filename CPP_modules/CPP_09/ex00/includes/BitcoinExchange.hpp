#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class BitcoinExchange {
public:
    BitcoinExchange(const std::string& dbFile);
    ~BitcoinExchange();

    void evaluate(const std::string& inputFile);

private:
    std::map<std::string, float> exchangeRates;

    void loadDatabase(const std::string& dbFile);
    float getExchangeRate(const std::string& date);
};

#endif