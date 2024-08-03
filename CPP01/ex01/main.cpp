#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		N;

	N = 10;
	horde = zombieHorde(N, "Walter");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}