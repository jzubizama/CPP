#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
    private:
        Brain   *_brain;
    public:
        Dog(void);
        virtual ~Dog(void);
        Dog(Dog &ref);
        Dog &operator = (const Dog &rhs);
        virtual void    makeSound(void) const;
};

#endif