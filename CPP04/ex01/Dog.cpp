#include "Dog.hpp"


Dog::Dog (void)
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
    return;
}

Dog::~Dog (void)
{
    delete this->_brain;
    std::cout << "Dog destroyed" << std::endl;
    return;
}

Dog::Dog(Dog &ref)
{
    this->type = ref.getType();
    this->_brain = new Brain();
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
