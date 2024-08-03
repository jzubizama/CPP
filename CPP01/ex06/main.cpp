#include "Harl.hpp"

void	harl_sw(char *v, Harl &har)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			chose;

	chose = -1;
	for(int i = 0; i < 4; i++)
		if (levels[i] == v)
			chose = i;
	switch (chose)
	{
	case 0:
		har.complain(levels[0]);
	case 1:
		har.complain(levels[1]);
	case 2:
		har.complain(levels[2]);
	case 3:
		har.complain(levels[3]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int c, char **v)
{
	Harl har;

	if (c != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		harl_sw(v[1], har);
	return (0);
}