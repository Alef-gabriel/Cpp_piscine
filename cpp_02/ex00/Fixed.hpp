#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fix);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator=(const Fixed& fixed);

	private:
		static const int	_literal;

		int	_fixed;
};

#endif