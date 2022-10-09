#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(Cat const & obj) : Animal(obj)
{
	*this = obj;
}

Cat	&Cat::operator=(Cat const & obj)
{
	this->_type = obj.getType();
	this->_brain = new Brain(*obj.getBrain());
	return(*this);
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

std::string Cat::getIdea(void)
{
	return NULL;
}

std::string Cat::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return getBrain()->_ideas[i];
	else
		return NULL;
}