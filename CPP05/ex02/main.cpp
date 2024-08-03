#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int	main(void)
{
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		AForm *sf1= new ShrubberyCreationForm("home");
		AForm *sf2= new RobotomyRequestForm("bryan");
		AForm *sf3= new PresidentialPardonForm("bob");
		sf1->beSigned(b1);
		b1.executeForm(*sf1);
		sf2->beSigned(b1);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		sf3->beSigned(b1);
		b1.executeForm(*sf3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
