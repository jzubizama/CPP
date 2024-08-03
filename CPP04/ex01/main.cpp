#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int    main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Dog* k = new Dog();
    
    delete j;//should not create a leak
    delete i;
    delete k;
    return 0;
}