#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal & operator=(Animal const & obj);
		Animal(const Animal& obj);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
		virtual ~Animal(void);
		virtual std::string getIdea(int index);
		virtual std::string getIdea(void);

	protected:
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, Animal const & i);
#endif