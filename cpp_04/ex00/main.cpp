#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat();

    i->makeSound(); //will output the cat sound!

    j->makeSound(); //will output the dog sound!

	k->makeSound();

	l->makeSound();

	meta->makeSound();

	wrongmeta->makeSound();

    delete meta;
	delete wrongmeta;
    delete j;
    delete i;
	delete k;
	delete l;
    return 0;
}