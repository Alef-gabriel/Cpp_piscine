#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const & obj);
		Dog & operator=(Dog const & obj);
		~Dog(void);
		void makeSound(void) const;
};

#endif