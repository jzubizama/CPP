#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int    main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();//will output wrong animal sound!

    const WrongCat* s = new WrongCat();
    s->makeSound();//will output wrong cat sound!

    delete meta;
    delete j;
    delete i;
    delete k;
    return 0;
}