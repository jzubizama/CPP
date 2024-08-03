#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie;

	heapZombie = newZombie("Walter");
	randomChump("Bob");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}