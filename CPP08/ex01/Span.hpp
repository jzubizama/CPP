#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        Span();
        unsigned int _N;
        std::vector <int> _nums;
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
};

#endif