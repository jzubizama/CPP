#include "Zombie.hpp"

Zombie::Zombie (void)
{
    return;
}

Zombie::~Zombie (void)
{
    std::cout << "deleted" << std::endl;
    return;
}

void	Zombie::setName(std::string name)
{
    this->_name = name;
    return;
}
