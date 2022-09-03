#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point& pt);
		Point& operator=(const Point& pt);
		Fixed geterX( void ) const;
		Fixed geterY( void ) const;
	private:
		const Fixed _x;
		const Fixed _y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
float		orient(Point const a, Point const b, Point const c);
#endif