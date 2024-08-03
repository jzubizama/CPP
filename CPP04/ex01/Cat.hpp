#ifndef CAT_H
# define CAT_H

#include<iostream>
#include"Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    private:
        Brain   *_brain;
    public:
        Cat(void);
        virtual ~Cat(void);
        Cat(Cat &ref);
        Cat &operator = (const Cat &rhs);
        virtual void    makeSound(void) const;
};

#endif