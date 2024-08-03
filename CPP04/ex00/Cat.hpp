#ifndef CAT_H
# define CAT_H

#include<iostream>
#include"Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        ~Cat(void);
        Cat(Cat &ref);
        Cat &operator = (const Cat &rhs);
        virtual void    makeSound(void) const;
};

#endif