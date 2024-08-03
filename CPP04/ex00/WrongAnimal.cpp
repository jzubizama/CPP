#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void)
{
    std::cout << "Wrong Animal constructed" << std::endl;
    return;
}

WrongAnimal::~WrongAnimal (void)
{
    std::cout << "Wrong Animal detructed" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal &ref)
{
    this->type = ref.getType();
    std::cout << "WrongAnimal constructed from a copy" << std::endl;
    return;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &rhs)
{
    this->type = rhs.type;
    return (*this);
}

std::string   WrongAnimal::getType(void) const
{
    return (type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong animal SOUND!" << std::endl;
    return;
}
