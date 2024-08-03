#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat b1("b1", 9);
		std::cout << b1 << std::endl;
		Form f1("f1", 10, 10);
		b1.signForm(f1);
		std::cout << f1 << std::endl;
		b1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
