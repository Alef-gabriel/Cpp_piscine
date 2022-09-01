#include "Fixed.hpp"

const int Fixed::_literal = 8;

Fixed::Fixed()
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
	_fixed = raw << _literal;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float raw)
{
	_fixed = (int)(raw * (float)(1 << _literal));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;

}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = fixed._fixed;
	return *this;
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

float	Fixed::toFloat( void ) const
{
	return (float)_fixed / (float)(1 << _literal);
}

int	Fixed::toInt( void ) const
{
	return _fixed / (int)(1 << _literal);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}