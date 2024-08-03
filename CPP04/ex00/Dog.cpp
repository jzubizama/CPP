#include "Dog.hpp"


Dog::Dog (void)
{
    this->type = "Dog";
    std::cout << "Dog constructed" << std::endl;
    return;
}

Dog::~Dog (void)
{
    std::cout << "Dog detructed" << std::endl;
    return;
}

Dog::Dog(Dog &ref)
{
    this->type = ref.getType();
    std::cout << "Dog constructed from a copy" << std::endl;
    return;
}

Dog &Dog::operator = (const Dog &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Guau Guau" << std::endl;
    return;
}
