#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
public:

	Point( void );
	Point( const float x, const float y );
	~Point( void );

private:

	const Fixed _x;
	const Fixed _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
/*
• Public members:
◦ A default constructor that initializes x and y to 0.
◦ A constructor that takes as parameters two constant floating-point numbers.
It initializes x and y with those parameters.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ Anything else useful
*/