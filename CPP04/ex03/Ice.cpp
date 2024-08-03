#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
    //std::cout << "Ice constructed" << std::endl;
    return;
}

Ice::Ice(Ice const &ref)
{
    this->_type = ref._type;
    //std::cout << "Ice constructed from  copy" << std::endl;
    return;
}

Ice::~Ice(void)
{
    //std::cout << "Ice destroyed" << std::endl;
    return;
}

Ice &Ice::operator = (Ice const &rhs)
{
    this->_type = rhs._type;
    return (*this);
}

AMateria *Ice::clone(void) const
{
    AMateria    *cpy = new Ice(*this);

    return (cpy);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
    return;
}