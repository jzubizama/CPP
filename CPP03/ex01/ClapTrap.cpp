#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _enpnt(10), _attdmg(10)
{
    std::cout << name <<" ClapTrap created" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ct;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->_name <<" ClapTrap destroyed" << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
    this->_name = ct._name;
    this->_health = ct._health;
    this->_enpnt = ct._enpnt;
    this->_attdmg = ct._attdmg;
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_enpnt)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attdmg << " points of damage!" << std::endl;
        this->_enpnt -= 1;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy!" << std::endl;
    return;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_health > amount)
    {
        this->_health -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    }
    else
    {
        this->_health = 0;
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    }
    return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_enpnt)
    {
        this->_health += amount;
        this->_enpnt -= 1;
        std::cout << "ClapTrap " << _name << " gets " << amount << " points! Is now " << _health << std::endl;
    
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy!" << std::endl;
    return;
}
