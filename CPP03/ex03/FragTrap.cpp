#include"FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_health = 100;
    this->_enpnt = 100;
    this->_attdmg = 30;
    this->_defhealth = this->_health;
    this->_defenpnt = this->_enpnt;
    this->_defattdmg = this->_attdmg;
    std::cout << name <<" FragTrap created" << std::endl;
    return;
}


FragTrap::~FragTrap(void)
{
    std::cout << this->_name <<" FragTrap destroyed" << std::endl;
    return;
}


void    FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << _name << " requests a high five." << std::endl;
    return;
}
