#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &data);
        ScalarConverter &operator=(ScalarConverter const &data);
    public:
        ~ScalarConverter();
        static void convert(const std::string &str);
        class ImpossibleException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif