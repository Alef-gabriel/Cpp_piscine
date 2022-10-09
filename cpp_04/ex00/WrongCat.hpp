#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & obj);
		WrongCat & operator=(WrongCat const & obj);
		~WrongCat(void);
		void makeSound(void) const;
	protected :
		std::string _type;
};
#endif