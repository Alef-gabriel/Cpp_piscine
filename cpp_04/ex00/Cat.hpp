#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const & obj);
		Cat & operator=(Cat const & obj);
		~Cat(void);
		void makeSound(void) const;
};
#endif