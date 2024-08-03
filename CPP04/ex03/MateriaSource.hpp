#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource: public IMateriaSource
{
    private:
        AMateria    *_matSource[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &ref);
        virtual ~MateriaSource(void);
        MateriaSource &operator =(MateriaSource const &rhs);
        
        virtual void    learnMateria(AMateria* mat);
        virtual AMateria*   createMateria(std::string const & type);
};

#endif