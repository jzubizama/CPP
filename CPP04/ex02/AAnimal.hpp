#ifndef AANIMAL_H
# define AANIMAL_H

#include<iostream>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal(void);
        virtual ~AAnimal(void);
        AAnimal(AAnimal &ref);
        AAnimal &operator = (AAnimal const &rhs);
        virtual void    makeSound(void) const = 0;
        std::string    getType(void) const;
};

#endif