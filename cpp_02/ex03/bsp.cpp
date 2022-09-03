#include "Point.hpp"
#include <cmath>

float	orient(Point const a, Point const b, Point const c)
{
	Fixed	two(2);

	return std::abs(((a.geterX()*(b.geterY()-c.geterY())
	+ b.geterX()*(c.geterY()-a.geterY())
	+ c.geterX()*(a.geterY()-b.geterY())) / two).toFloat());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	float	abc;
	float	area;

	abc = orient(a,b ,c);
	area = orient(a,b ,point) + orient(b,c ,point) + orient(c,a ,point);
	if (abc == area)
		return true;
	return false;
}