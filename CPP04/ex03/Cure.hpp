#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &ref);
        virtual ~Cure(void);
        Cure &operator = (Cure const & rhs);
        
        virtual AMateria* clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif