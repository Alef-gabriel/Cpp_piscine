#include "Animal.hpp"

Animal::Animal() : _type("unknown")
{
	std::cout << "Animal " << this->_type << " created !" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << this->_type << " created !" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const & obj)
{
	this->_type = obj._type;
	return (*this);
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
}

std::string Animal::getType() const
{
	return _type;
}

void	Animal::makeSound() const
{
	std::cout << "Borur" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Animal const & i)
{
	o << i.getType() << std::endl;
	return (o);
}

std::string Animal::getIdea(void)
{
	return ("NOT HAS BRAIN");
}

std::string Animal::getIdea(int i)
{
	(void)i;
	return ("NOT HAS BRAIN");
}
