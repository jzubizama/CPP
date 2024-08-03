#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        AMateria *_inv[4];
        std::string _name;
    
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &ref);
        virtual ~Character(void);
        Character &operator =(Character const &rhs);

        std::string const &getName(void) const;
        void    equip(AMateria *m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
};

#endif