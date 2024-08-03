#ifndef ANIMAL_H
# define ANIMAL_H

#include<iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(Animal &ref);
        Animal &operator = (Animal const &rhs);
        virtual void    makeSound(void) const;
        std::string    getType(void) const;
};

#endif