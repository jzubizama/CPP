#include "Span.hpp"
#include <cstdlib> // for rand and srand
#include <ctime> // for time

int main()
{
    srand(time(0)); // use current time as seed for random generator

    int n = 10000;
    Span sp = Span(n);
    
    for (int i = 0; i < n; i++)
        sp.addNumber(rand() % n); // generate random number between 0 and n-1
    try {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}