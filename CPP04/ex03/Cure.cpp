#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
    //std::cout << "Cure constructed" << std::endl;
    return;
}

Cure::Cure(Cure const &ref)
{
    this->_type = ref._type;
    //std::cout << "Cure constructed from  copy" << std::endl;
    return;
}

Cure::~Cure(void)
{
    //std::cout << "Cure destroyed" << std::endl;
    return;
}

Cure &Cure::operator = (Cure const &rhs)
{
    this->_type = rhs._type;
    return (*this);
}

AMateria *Cure::clone(void) const
{
    AMateria    *cpy = new Cure(*this);

    return (cpy);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << target.getName() << std::endl;
    return;
}