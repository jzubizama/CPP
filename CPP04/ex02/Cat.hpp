#ifndef CAT_H
# define CAT_H

#include<iostream>
#include"AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
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