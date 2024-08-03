#include "AAnimal.hpp"

AAnimal::AAnimal (void)
{
    std::cout << "Animal constructed" << std::endl;
    return;
}

AAnimal::~AAnimal (void)
{
    std::cout << "Animal destroyed" << std::endl;
    return;
}

AAnimal::AAnimal(AAnimal &ref)
{
    this->type = ref.getType();
    std::cout << "Animal constructed from a copy" << std::endl;
    return;
}

AAnimal &AAnimal::operator = (const AAnimal &rhs)
{
    this->type = rhs.type;
    return (*this);
}

std::string   AAnimal::getType(void) const
{
    return (type);
}

void    AAnimal::makeSound(void) const
{
    std::cout << "Animal SOUND!" << std::endl;
    return;
}
