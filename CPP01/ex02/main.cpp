#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "MEMORY ADDRESS" << std::endl;
	std::cout << "String: " << &str;
	std::cout << "--PTR: " << &stringPTR;
	std::cout << "--REF: " << &stringREF << std::endl;

	std::cout << "VALUES" << std::endl;
	std::cout << "String: " << str;
	std::cout << "--PTR: " << *stringPTR;
	std::cout << "--REF: " << stringREF << std::endl;
	return (0);
}