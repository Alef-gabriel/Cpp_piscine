#include "Point.hpp"

static bool inside( void )
{
	Point a( 42 , -5 );
	Point b( 21 , 6 );
	Point c( 6 , 3 );
	Point point( 21 , 3 );

	return bsp(a, b, c, point);
}

static bool	outside( void )
{
	Point a( 42 , -5 );
	Point b( 21 , 6 );
	Point c( 6 , 3 );
	Point point( 42 , -42 );

	return bsp(a, b, c, point);
}

int main( void ) {

	std::cout << "Outside function is OUTSIDE the triangle?: " << outside() << std::endl;
	std::cout << "Outside function is INSIDE the triangle?: " << inside() << std::endl;
	return 0;
}
