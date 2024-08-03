#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class Character;
class ICharacter;
class MateriaSource;
class IMateriaSource;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const &type);

        AMateria(void);
        AMateria(AMateria &ref);
        virtual ~AMateria(void);
        AMateria &operator = (const AMateria &rhs);

        std::string const & getType() const; //Returns materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif