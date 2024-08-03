#include "PmergeMe.hpp"

bool checkNum(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}
int main (int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe [list of numbers]" << std::endl;
        return (1);
    }
    try
    {
        std::string str;
        for (int i = 1; i < ac; i++)
        {
            /* if (!checkNum(av[i]))
                throw std::exception(); */
            str += av[i];
            str += " ";
        }
        PmergeMe p;
        p.execVec(str);
        p.execDeq(str);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: Invalid input" << std::endl;
        return (1);
    }
    return (0);
}