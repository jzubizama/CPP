#include "RPN.hpp"


int toInt(const std::string &str)
{
    std::stringstream ss(str);
    int num;
    ss >> num;
    return (num);
}

RPN::RPN()
{
    _result = 0;
    _calculated = false;
}

RPN::~RPN()
{
}

void RPN::parseInput(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
            continue;
        if (input[i] >= '0' && input[i] <= '9')
        {
            std::string number;
            while (input[i] >= '0' && input[i] <= '9')
            {
                number += input[i];
                i++;
            }
            i--;
            _stack.push(toInt(number));
        }
        else if (input[i] == '+')
        {
            if (_stack.size() < 2)
            {
                std::cout << "Error: not enough operands" << std::endl;
                throw std::exception();
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            _stack.push(a + b);
            _calculated = true;
        }
        else if (input[i] == '-')
        {
            if (_stack.size() < 2)
            {
                std::cout << "Error: not enough operands" << std::endl;
                throw std::exception();
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            _stack.push(b - a);
            _calculated = true;
        }
        else if (input[i] == '*')
        {
            if (_stack.size() < 2)
            {
                std::cout << "Error: not enough operands" << std::endl;
                throw std::exception();
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            _stack.push(a * b);
            _calculated = true;
        }
        else if (input[i] == '/')
        {
            if (_stack.size() < 2)
            {
                std::cout << "Error: not enough operands" << std::endl;
                throw std::exception();
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            _stack.push(b / a);
            _calculated = true;
        }
        else
        {
            std::cout << "Error: invalid character" << std::endl;
            throw std::exception();
        }
    }
    if (_stack.size() == 1)
    {
        _result = _stack.top();
        _stack.pop();
        return;
    }
}

void RPN::printResult()
{
    if (_calculated && _stack.size() == 0)
        std::cout << "Result: " << _result << std::endl;
    else
        std::cout << "Error" << std::endl;
}

