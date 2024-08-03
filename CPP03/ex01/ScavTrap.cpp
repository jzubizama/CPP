#include"ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_health = 100;
    this->_enpnt = 50;
    this->_attdmg = 20;
    std::cout << name <<" ScavTrap created" << std::endl;
    return;
}


ScavTrap::~ScavTrap(void)
{
    std::cout << this->_name <<" ScavTrap destroyed" << std::endl;
    return;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_enpnt)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attdmg << " points of damage!" << std::endl;
        this->_enpnt -= 1;
    }
    else
        std::cout << "ScavTrap " << _name << " has no energy!" << std::endl;
    return;
}

void    ScavTrap::guardGate(void) const
{
    std::cout << "ScarvTrap " << _name << " is now in Gate keeper mode." << std::endl;
    return;
}
