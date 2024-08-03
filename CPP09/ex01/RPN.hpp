#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    public:
        RPN();
        ~RPN();
        void parseInput(std::string input);
        void printResult();
    private:
        std::stack<int> _stack;
        std::string _input;
        int _result;
        bool _calculated;
};

#endif