#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &ref);
        virtual ~Ice(void);
        Ice &operator = (Ice const & rhs);
        
        virtual AMateria* clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif