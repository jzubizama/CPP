#include "Brain.hpp"


Brain::Brain (void)
{
    std::cout << "Brain constructed" << std::endl;
    return;
}

Brain::~Brain (void)
{
    std::cout << "Brain destroyed" << std::endl;
    return;
}

Brain::Brain(Brain &ref)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ref.ideas[i];
    std::cout << "Brain constructed from a copy" << std::endl;
    return;
}

Brain &Brain::operator = (const Brain &rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}