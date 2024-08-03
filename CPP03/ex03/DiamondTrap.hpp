#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap(std::string name);
		~DiamondTrap(void);
        void    whoAmI(void) const;
        using   ScavTrap::attack;
};

#endif