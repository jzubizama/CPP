#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_health = FragTrap::_defhealth;
    this->_enpnt = ScavTrap::_defenpnt;
    this->_attdmg = FragTrap::_defattdmg;
    std::cout << name <<" DiamondTrap created" << std::endl;
    return;
}


DiamondTrap::~DiamondTrap(void)
{
    std::cout << this->_name <<" DiamondTrap destroyed" << std::endl;
    return;
}

void    DiamondTrap::whoAmI(void) const
{
    std::cout << "My name is: " << this->_name;
    std::cout << " and my ClapName is: " << this->ClapTrap::_name <<std::endl;
    //std::cout << "Attack: " << _attdmg << " / Hit points: " << _health << " / En points: " << _enpnt << std::endl;
    return;
}
