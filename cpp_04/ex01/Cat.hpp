#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(Cat const & obj);
		Cat & operator=(Cat const & obj);
		~Cat(void);
		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
		virtual std::string getIdea(int index);
		virtual std::string getIdea(void);
};
#endif