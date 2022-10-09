#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & obj) : WrongAnimal("WrongCat")
{
	*this = obj;
}

WrongCat & WrongCat::operator=(WrongCat const & obj)
{
	this->_type = obj.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miooou!" << std::endl;
}