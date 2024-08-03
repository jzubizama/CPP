#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include"ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    protected:
        unsigned int    _defhealth;
        unsigned int    _defenpnt;
        unsigned int    _defattdmg;
    public:
        ScavTrap(std::string name);
		~ScavTrap(void);
        void    attack(const std::string &target);
        void    guardGate(void) const;
};

#endif