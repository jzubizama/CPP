#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {};

Span::~Span() {};

Span::Span(){};

Span::Span(const Span &copy){
    *this = copy;
}

Span &Span::operator=(const Span &copy){
    _N = copy._N;
    _nums = copy._nums;
    return *this;
}

void Span::addNumber(int num){
    if (_nums.size() < _N)
        _nums.push_back(num);
    else
        throw std::exception();
}

int Span::shortestSpan() {
    if (_nums.size() < 2)
        throw std::exception();
    int min = abs(_nums[0] - _nums[1]);
    std::sort(_nums.begin(), _nums.end());
    for (std::vector<int>::iterator it = _nums.begin(); it != _nums.end() - 1; it++)
    {
        if (abs(*it - *(it + 1)) < min)
            min = abs(*it - *(it + 1));
    }
    return min;
}

int Span::longestSpan() {
    if (_nums.size() < 2)
        throw std::exception();

    std::vector<int>::iterator min1 = std::min_element(_nums.begin(), _nums.end());
    std::vector<int>::iterator max1 = std::max_element(_nums.begin(), _nums.end());
    return *max1 - *min1;
}
