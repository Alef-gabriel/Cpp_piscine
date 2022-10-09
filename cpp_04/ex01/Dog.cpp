#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const & obj) : Animal(obj)
{
	*this = obj;
}

Dog	& Dog::operator=(Dog const & obj)
{
	this->_type = obj.getType();
	this->_brain = new Brain(*obj.getBrain());
	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Au Au!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

std::string Dog::getIdea(void)
{
	return NULL;
}

std::string Dog::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return getBrain()->_ideas[i];
	else
		return NULL;
}
