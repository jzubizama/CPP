#include "ScalarConverter.hpp"

static int ft_stoi(const std::string &str)
{
    int i;
    std::stringstream ss(str);
    ss >> i;
    if (ss.fail() || !ss.eof())
        //throw ScalarConverter::ImpossibleException();
        throw std::invalid_argument("stoi");
    return i;
}

static float ft_stof(const std::string &str)
{
    float f;
    std::stringstream ss(str);
    ss >> f;
    return f;
}

static double ft_stod(const std::string &str)
{
    double d;
    std::stringstream ss(str);
    ss >> d;
    return d;
}

static bool isChar(const std::string &str)
{
    if (str.length() != 1)
        return false;
    if (str.at(0) > std::numeric_limits<char>::max()
        || str.at(0) < std::numeric_limits<char>::min()
        || (str.at(0)>='0' && str.at(0)<='9'))
        return false;
    return true;
}

static bool isInt(const std::string &str)
{
    size_t i = 0;
    if (str.at(0) == '-' || str.at(0) == '+')
        i++;
    for (; i < str.length(); i++)
    {
        if (!(str.at(i)>='0' && str.at(i)<='9'))
            return false;
    }
    return true;
}

static bool isFloat(const std::string &str)
{
    size_t i = 0;
    bool dot = false;
    
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return true;
    if (str.at(str.length() - 1) != 'f')
        return false;
    if (str.at(0) == '-' || str.at(0) == '+')
        i++;
    for (; i < str.length() - 1; i++)
    {
        if (str.at(i) == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else if (!(str.at(i)>='0' && str.at(i)<='9'))
            return false;
    }
    return true;
}

static bool isDouble(const std::string &str)
{
    size_t i = 0;
    bool dot = false;
    
    if (str == "-inf" || str == "+inf" || str == "nan")
        return true;
    if (str.at(str.length() - 1) == 'f')
        return false;
    if (str.at(0) == '-' || str.at(0) == '+')
        i++;
    for (; i < str.length() - 1; i++)
    {
        if (str.at(i) == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else if (!(str.at(i)>='0' && str.at(i)<='9'))
            return false;
    }
    return true;
}

static int getType(const std::string &str)
{
    if (isChar(str))
        return 1;
    else if (isInt(str))
        return 2;
    else if (isFloat(str))
        return 3;
    else if (isDouble(str))
        return 4;
    return -1;
}

static void write_Char(const std::string &str)
{
    char c = str.at(0);
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void write_Int(const std::string &str)
{
    int i = ft_stoi(str);
    if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (isprint(i))
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

static void write_Float(const std::string &str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
        return;
    }
    float f = ft_stof(str);
    std::string str2 = "";
    if (f - static_cast<int>(f) ==0)
        str2 = ".0";
    if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (isprint(f))
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << f << str2 << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << str2 << std::endl;
}

static void write_Double(const std::string &str)
{
    if (str == "-inf" || str == "+inf" || str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return;
    }
    double d = ft_stod(str);
    std::string str2 = "";
    if (d - static_cast<int>(d) ==0)
        str2 = ".0";
    if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (isprint(d))
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << str2 << "f" << std::endl;
    std::cout << "double: " << d << str2 << std::endl;
}

void ScalarConverter::convert(const std::string &str){
    switch (getType(str))
    {
    case 1:
        write_Char(str);
        break;
    case 2:
        write_Int(str);
        break;
    case 3:
        write_Float(str);
        break;
    case 4:
        write_Double(str);
        break;
    default:
        break;
    }
}

const char* ScalarConverter::ImpossibleException::what() const throw(){
    return "impossible";
}

ScalarConverter::ScalarConverter(){
    return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &data){
    *this = data;
    return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &data){
    (void)data;
    return *this;
}

ScalarConverter::~ScalarConverter(){
    return;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}