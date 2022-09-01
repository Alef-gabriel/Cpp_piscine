#include "Fixed.hpp"

const int Fixed::_literal = 8;

Fixed::Fixed()
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = fix.getRawBits();

}

void	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = fixed.getRawBits();
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void	Fixed::setRawBits( int const raw )
{
	_fixed = raw;
}