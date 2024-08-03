#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include"ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    protected:
        unsigned int    _defhealth;
        unsigned int    _defenpnt;
        unsigned int    _defattdmg;
    public:
        FragTrap(std::string name);
		~FragTrap(void);
        void    highFivesGuys(void) const;
};

#endif