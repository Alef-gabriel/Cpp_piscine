#include "Fixed.hpp"
#include <cmath>

const int Fixed::_literal = 8;

Fixed::Fixed()
{
	_fixed = 0;
}

Fixed::Fixed(const int raw)
{
	_fixed = raw << _literal;
}

Fixed::Fixed(const float raw)
{
	_fixed = round(raw * (float)(1 << _literal));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& fix)
{
	*this = fix;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	this->_fixed = fixed._fixed;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
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

bool Fixed::operator > (const Fixed& fixed)
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator < (const Fixed& fixed)
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator == (const Fixed& fixed)
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator >= (const Fixed& fixed)
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator <= (const Fixed& fixed)
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator != (const Fixed& fixed)
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator + (const Fixed& fixed)
{
	return this->toFloat() + fixed.toFloat();
}

Fixed Fixed::operator - (const Fixed& fixed)
{
	return this->toFloat() - fixed.toFloat();
}

Fixed Fixed::operator / (const Fixed& fixed)
{
	return this->toFloat() / fixed.toFloat();
}

Fixed Fixed::operator * (const Fixed& fixed)
{
	return this->toFloat() * fixed.toFloat();
}

Fixed& Fixed::operator ++ ()
{
	int	raw = this->getRawBits();
	raw++;
	this->setRawBits(raw);
	return *this;
}

Fixed& Fixed::operator -- ()
{
	int	raw = this->getRawBits();
	raw--;
	this->setRawBits(raw);
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed	tmp = *this;
	++(*this);
	return tmp;
}

Fixed Fixed::operator -- (int)
{
	Fixed	tmp = *this;
	--(*this);
	return tmp;
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if ((Fixed)a > (Fixed)b)
		return a;
	else
		return b;
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}
