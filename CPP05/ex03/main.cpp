#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat b1("b1", 15);
		Intern noone;
		AForm *sf1= noone.makeForm("shrubbery creation", "home");
		AForm *sf2= noone.makeForm("robotomy request", "bob");	
		AForm *sf3= noone.makeForm("presidential pardon", "joe");
		//AForm *sf4= noone.makeForm("unknown", "joe");
		b1.signForm(*sf1);
		b1.executeForm(*sf1);
		b1.signForm(*sf2);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		b1.executeForm(*sf2);
		b1.signForm(*sf3);
		b1.executeForm(*sf3);
		//b1.executeForm(*sf4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
