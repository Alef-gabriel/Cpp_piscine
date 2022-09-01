#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();
		Fixed(const Fixed& fix);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& operator=(const Fixed& fixed);
		int toInt( void ) const;
		float toFloat( void ) const;

	private:
		static const int	_literal;

		int	_fixed;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif