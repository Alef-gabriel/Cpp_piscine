#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(Dog const & obj);
		Dog & operator=(Dog const & obj);
		~Dog(void);
		void makeSound(void) const;
		Brain *getBrain(void) const;
		virtual std::string getIdea(int index);
		virtual std::string getIdea(void);
};

#endif