#include "BitcoinExchange.hpp"

time_t parseDateTime(const char* datetimeString, const char* format)
{
    struct tm tmStruct;

    memset(&tmStruct, 0, sizeof(tm));
    strptime(datetimeString, format, &tmStruct);
    return mktime(&tmStruct);
}

void BitcoinExchange::parseCSV(std::string filename)
{
    std::string doc = readBit(filename);

    std::istringstream ss(doc);
    std::string line;
    std::getline(ss, line);
    while (std::getline(ss, line))
    {
        std::istringstream ssline(line);
        std::string date;
        std::string value;
        std::getline(ssline, date, ',');
        std::getline(ssline, value, ',');
        _history[parseDateTime(date.c_str(), "%Y-%m-%d")] = std::strtod(value.c_str(), NULL);
        if (!_min)
            _min = parseDateTime(date.c_str(), "%Y-%m-%d");
        }
}

BitcoinExchange::BitcoinExchange(std::string filename): _min(0)
{
    try{
        parseCSV(filename);
    }catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}

double BitcoinExchange::getBitcoinValue(std::string date){
    if (_history.find(parseDateTime(date.c_str(), "%Y-%m-%d")) != _history.end())
        return _history[parseDateTime(date.c_str(), "%Y-%m-%d")];
    {
        time_t t = parseDateTime(date.c_str(), "%Y-%m-%d");
        while (_history.find(t) == _history.end() && t > _min)
        {
            t -= 100;
        }
        if (t > _min)
            return _history[t];
        else
            return 0;
    }
}

std::string BitcoinExchange::readBit(std::string filename)
{
    int op = open(filename.c_str(), O_RDONLY);
    const int size = 4096;
    char buffer[size];
    std::string doc;

    if (op == -1)
    {
        std::cerr << "Error: could not open file" << std::endl;
        throw std::exception();
    }
    while (int rd = read(op, buffer, size))
    {
        if (rd < 0)
        {
            std::cerr << "Error: could not read file" << std::endl;
            throw std::exception();
        }
        doc.append(buffer, rd);
    }
    close(op);
    return doc;
}

bool checkInput(std::string date, std::string value, std::string sep)
{
     struct tm tmStruct;

    strptime(date.c_str(), "%Y-%m-%d", &tmStruct);

    if (sep != "|" || value == "" || date == "" || tmStruct.tm_mon > 12 || tmStruct.tm_mon < 0 || tmStruct.tm_mday < 0
        || tmStruct.tm_mday > 31 || tmStruct.tm_year < 0 || tmStruct.tm_year > 9999)
    {
        std::cout << "Error: bad input!" << std::endl;
        return false;
    }
    else if (std::strtod(value.c_str(), NULL) > 1000)
    {
        std::cout << "Error: too large number." << std::endl;
        return false;
    }
    else if (std::strtod(value.c_str(), NULL) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::parseInput(std::string filename)
{
    std::string doc = readBit(filename);
    std::string date;
    std::string value;
    std::string sep;
    double pri = 0;

    std::istringstream ss(doc);
    std::string line;
    std::getline(ss, line);
    while (std::getline(ss, line))
    {
        std::istringstream ssline(line);
        date = "";
        value = "";
        sep = "";
        ssline >> date >> sep >> value;
        if (checkInput(date, value, sep))
        {
            pri = getBitcoinValue(date);
            std::cout << date << " => " << value << " = " << std::strtod(value.c_str(), NULL) * pri << std::endl;
        }
    }
}
