#ifndef WRONGCAT_H
# define WRONGCAT_H

#include<iostream>
#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(WrongCat &ref);
        WrongCat &operator = (const WrongCat &rhs);
        void    makeSound(void) const;
};

#endif