#include "Weapon.hpp"

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::Weapon (std::string type): _type(type)
{
	return;
}

Weapon::~Weapon (void)
{
	return;
}