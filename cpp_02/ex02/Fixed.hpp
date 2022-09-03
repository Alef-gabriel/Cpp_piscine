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
		Fixed& operator = (const Fixed& fixed);
		bool operator > (const Fixed& fixed);
		bool operator < (const Fixed& fixed);
		bool operator >= (const Fixed& fixed);
		bool operator <= (const Fixed& fixed);
		bool operator == (const Fixed& fixed);
		bool operator != (const Fixed& fixed);
		int toInt( void ) const;
		float toFloat( void ) const;
		Fixed operator * (const Fixed& fixed);
		Fixed operator / (const Fixed& fixed);
		Fixed operator - (const Fixed& fixed);
		Fixed operator + (const Fixed& fixed);
		Fixed& operator ++ ();
		Fixed& operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
		static Fixed max(const Fixed& a, const Fixed& b);
		static Fixed max(Fixed& a, Fixed& b);
		static Fixed min(const Fixed& a, const Fixed& b);
		static Fixed min(Fixed& a, Fixed& b);
	private:
		static const int	_literal;

		int	_fixed;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

std::istream& operator >>(std::istream& stream, const Fixed& fixed);

#endif