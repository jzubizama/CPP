#ifndef BRAIN_H
# define BRAIN_H

#include<iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(Brain &ref);
        ~Brain(void);
        Brain &operator = (const Brain &rhs);
};

#endif