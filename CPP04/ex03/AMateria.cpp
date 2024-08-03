#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->_type = "";
    //std::cout << "AMateria constructed" << std::endl;
    return;
}

AMateria::AMateria(AMateria &ref)
{
    this->_type = ref._type;
    //std::cout << "AMateria constructed from  copy" << std::endl;
    return;
}

AMateria::~AMateria(void)
{
    //std::cout << "AMateria destroyed" << std::endl;
    return;
}

AMateria &AMateria::operator = (AMateria const &rhs)
{
    this->_type = rhs._type;
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return(_type);
}