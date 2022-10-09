#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n\n---------HEAP TEST---------\n\n" << std::endl;

	const Animal* heapDog = new Dog();
	const Animal* heapCat = new Cat();
	delete heapDog;
	delete heapCat;
	{
		std::cout << "\n\n---------STACK + DEEP TEST---------\n\n" << std::endl;

		Dog dog;
		Cat cat;
		Dog dogCopy(dog);
		Cat catCopy(cat);
		std::cout << cat.getIdea(5) << std::endl;
		std::cout << catCopy.getIdea(5) << std::endl;
		std::cout << dog.getIdea(5) << std::endl;
		std::cout << dogCopy.getIdea(5) << std::endl;
	}

	std::cout << "\n\n---------ARRAY TEST---------\n\n" << std::endl;

	Animal *animals[4];
	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	for(int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		std::cout << animals[i]->getIdea(10) << std::endl;
		delete animals[i];
	}

	std::cout << "\n\n---------END---------\n\n" << std::endl;
}