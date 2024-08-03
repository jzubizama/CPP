#include "Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::Intern(const Intern &other)
{
	*this = other;
	return;
}

Intern::~Intern()
{
	return;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	int formind = -1;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			formind = i;
		}
	}
	switch (formind)
	{
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			throw Intern::UnknownFormException();
	}
	return NULL;
}

const char *Intern::UnknownFormException::what() const throw()
{
	return "Unknown form";
}