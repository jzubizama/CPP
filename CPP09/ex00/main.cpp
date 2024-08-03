#include "BitcoinExchange.hpp"

int main()
{
    try{
        BitcoinExchange exchange("./data.csv");
        exchange.parseInput("./input.txt");
    }catch(const std::exception &e){
        return -1;
    }
    return 0;
}