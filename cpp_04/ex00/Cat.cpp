#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & obj) : Animal("Cat")
{
	*this = obj;
}

Cat	&Cat::operator=(Cat const & obj)
{
	this->_type = obj.getType();
	return(*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}