#include "Point.hpp"

Point::Point(): _x( 0 ), _y( 0 )
{
}

Point::Point(const float x, const float y): _x( x ), _y( y )
{
}

Point::~Point()
{
}

Point::Point(const Point& pt)
{
	*this = pt;
}

Fixed Point::geterX( void ) const
{
	return _x;
}

Fixed Point::geterY( void ) const
{
	return _y;
}

Point&	Point::operator=(const Point& pt)
{
	const_cast<Fixed&>(this->_x) = pt._x;
	const_cast<Fixed&>(this->_y) = pt._y;

	return *this;
}

