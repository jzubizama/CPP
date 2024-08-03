#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fcntl.h>
#include <unistd.h>
#include <sstream>
#include <ctime>
#include <string>
#include <cstring>
#include <exception>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<time_t, double> _history;
        time_t _min;
        std::string readBit(std::string filename);

    public:
        BitcoinExchange(std::string filename);
        void parseCSV(std::string filename);
        double getBitcoinValue(std::string date);
        void parseInput(std::string filename);
};

time_t parseDateTime(const char* datetimeString, const char* format);

#endif