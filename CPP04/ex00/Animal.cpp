#include "Animal.hpp"

Animal::Animal (void)
{
    std::cout << "Animal constructed" << std::endl;
    return;
}

Animal::~Animal (void)
{
    std::cout << "Animal destroyed" << std::endl;
    return;
}

Animal::Animal(Animal &ref)
{
    this->type = ref.getType();
    std::cout << "Animal constructed from a copy" << std::endl;
    return;
}

Animal &Animal::operator = (const Animal &rhs)
{
    this->type = rhs.type;
    return (*this);
}

std::string   Animal::getType(void) const
{
    return (type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal SOUND!" << std::endl;
    return;
}
