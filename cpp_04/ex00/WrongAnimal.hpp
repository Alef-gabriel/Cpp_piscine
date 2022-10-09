#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& obj);
		std::string getType(void) const;
		void makeSound(void) const;
		WrongAnimal & operator=(WrongAnimal const & obj);
		virtual ~WrongAnimal(void);

	protected:
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i);
#endif