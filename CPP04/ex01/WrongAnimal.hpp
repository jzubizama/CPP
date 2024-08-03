#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include<iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(WrongAnimal &ref);
        WrongAnimal &operator = (const WrongAnimal &rhs);
        void    makeSound(void) const;
        std::string    getType(void) const;
};

#endif