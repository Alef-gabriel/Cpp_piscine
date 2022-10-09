#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("undefined")
{
	std::cout << "WrongAnimal " << this->_type << " created !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal " << this->_type << " created !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & obj)
{
	this->_type = obj._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void    WrongAnimal::makeSound() const
{
	std::cout << "Broth" << std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << i.getType() << std::endl;
	return (o);
}