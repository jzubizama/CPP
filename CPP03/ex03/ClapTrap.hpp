#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include<iostream>
#include<cmath>

class ClapTrap{
    protected:
        std::string _name;
        unsigned int    _health;
        unsigned int    _enpnt;
        unsigned int    _attdmg;
    public:
        ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ct);
		~ClapTrap(void);
		ClapTrap &operator = (const ClapTrap &ct);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif