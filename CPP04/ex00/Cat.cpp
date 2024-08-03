#include "Cat.hpp"

Cat::Cat (void)
{
    this->type = "Cat";
    std::cout << "Cat constructed" << std::endl;
    return;
}

Cat::~Cat (void)
{
    std::cout << "Cat destroyed" << std::endl;
    return;
}

Cat::Cat(Cat &ref)
{
    this->type = ref.getType();
    std::cout << "Cat constructed from a copy" << std::endl;
    return;
}

Cat &Cat::operator = (const Cat &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaw Miaw" << std::endl;
    return;
}
