#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->_matSource[i] = NULL;
    //std::cout << "MateriaSource default created" << std::endl;
    return;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
    for (int i = 0; i < 4; i++)
        this->_matSource[i] = ref._matSource[i]->clone();
    //std::cout << "MateriaSource copy created" << std::endl;
    return;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_matSource[i])
            delete this->_matSource[i];
    }
    //std::cout << "MateriaSource destroyed" << std::endl;
    return;
}

MateriaSource &MateriaSource::operator = (MateriaSource const &rhs)
{
    for (int i = 0; i < 4; i++)
        this->_matSource[i] = rhs._matSource[i]->clone();
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *mat)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_matSource[i])
        {
            this->_matSource[i] = mat;
            std::cout << "Materia source learned: " << mat->getType() << std::endl;
            return;
        }
    }
    std::cout << "No space left to learn!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_matSource[i]->getType() == type)
        {
            std::cout << "Materia source created: " << type << std::endl;
            return (this->_matSource[i]->clone());
        }
    }
    std::cout << "I don't know how to create that type!" << std::endl;
    return (NULL);
}