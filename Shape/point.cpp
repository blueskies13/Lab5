#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0)throw invalid_argument("La valeur X ne peux pas etre negative");
	if (_y < 0)throw invalid_argument("La valeur Y ne peux pas etre negative");
}

bool Point::operator == (const Point & point) const
{
	if (point.x != this->x) return false;
	if (point.y != this->y) return false;
	return true;
}

bool Point::operator != (const Point & point) const
{
	if (point == *this)
	{
		return false;
	}
	return true; 
}
