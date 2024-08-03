#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn \"[RPN expression]\"" << std::endl;
        return 1;
    }
    RPN rpn;
    std::string input = av[1];
    try
    {
        rpn.parseInput(input);
        rpn.printResult();
    }
    catch(const std::exception& e)
    {
        return -1;
    }
    
    return 0;
}