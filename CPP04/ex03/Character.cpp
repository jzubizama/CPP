#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
    //std::cout << "Default character created" << std::endl;
    return;
}

Character::Character(std::string name): _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
    //std::cout << "Character " << _name << " created" << std::endl;
    return;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i])
        {
            delete this->_inv[i];
        }
    }
    //std::cout << "Character destroyed" << std::endl;
    return;
}

Character::Character(Character const &ref)
{
    this->_name = ref._name;
    for (int i = 0; i < 4; i++)
    {
        this->_inv[i] = ref._inv[i]->clone();
    }
    //std::cout << "Character created from copy" << std::endl;
    return;
}

Character &Character::operator = (Character const &rhs)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = rhs._inv[i];
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Materia doesn't exist!" << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!this->_inv[i])
        {
            this->_inv[i] = m;
            std::cout << _name << " has equiped " << m->getType() << " material" << std::endl;
            return;
        }
    }
    std::cout << "No space left in the inventary!" << std::endl;
    return;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "Bad index number" << std::endl;
        return;
    }
    if (this->_inv[idx])
    {
        //Handle material unequiped !!!!!!
        std::cout << _name << " has unequiped " << this->_inv[idx]->getType() << " material" << std::endl;
        this->_inv[idx] = NULL;
        return;
    }
    std::cout << "The selected position is empty!" << std::endl;
    return;
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "Bad index number" << std::endl;
        return;
    }
    if (!this->_inv[idx])
    {
        std::cout << "Index position is empty!" << std::endl;
        return;
    }
    this->_inv[idx]->use(target);
    delete this->_inv[idx];
    this->_inv[idx] = NULL;
    return;
}
