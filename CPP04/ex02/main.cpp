#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int    main(void)
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    //const AAnimal *an = new AAnimal();
    delete j;//should not create a leak
    delete i;
    return 0;
}