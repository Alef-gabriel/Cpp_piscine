#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & obj) : Animal(obj)
{
	*this = obj;
}

Dog	& Dog::operator=(Dog const & obj)
{
	this->_type = obj.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Au Au!" << std::endl;
}