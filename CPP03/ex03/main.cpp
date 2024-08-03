#include<iostream>
#include"DiamondTrap.hpp"

int main()
{
	DiamondTrap d("Richi");
	d.whoAmI();
	d.attack("bob");
	d.takeDamage(0);
	d.beRepaired(0);
	return 0;
}
