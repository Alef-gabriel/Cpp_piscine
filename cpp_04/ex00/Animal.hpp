#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal & operator=(Animal const & obj);
		Animal(const Animal& obj);
		std::string getType() const;
		virtual void makeSound() const;
		virtual ~Animal();

	protected:
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, Animal const & i);
#endif