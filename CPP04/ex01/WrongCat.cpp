#include"WrongCat.hpp"

WrongCat::WrongCat (void)
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat constructed" << std::endl;
    return;
}

WrongCat::~WrongCat (void)
{
    std::cout << "Wrong Cat destructed" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat &ref)
{
    this->type = ref.getType();
    std::cout << "WrongCat constructed from a copy" << std::endl;
    return;
}

WrongCat &WrongCat::operator = (const WrongCat &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Miaw Miaw" << std::endl;
    return;
}