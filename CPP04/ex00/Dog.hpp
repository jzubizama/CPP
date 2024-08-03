#ifndef DOG_H
# define DOG_H

#include<iostream>
#include"Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        ~Dog(void);
        Dog(Dog &ref);
        Dog &operator = (const Dog &rhs);
        virtual void    makeSound(void) const;
};

#endif