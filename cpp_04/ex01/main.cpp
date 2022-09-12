#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* meta[] = { new Dog(), new Cat(), new Dog(), new Cat() };
    meta[0]->makeSound();
    meta[1]->makeSound();

    for (int i = 0; i < 4; i++)
    {
        delete meta[i];
    }
    return 0;
}