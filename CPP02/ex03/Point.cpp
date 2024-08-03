#include"Point.hpp"

Fixed Point::get_x(void) const
{
    return(this->_x);
}

Fixed Point::get_y(void) const
{
    return(this->_y);
}

Point::Point (void): _x(0), _y(0)
{
	return;
}

Point::Point (const Point &pnt):_x(pnt._x), _y(pnt._y)
{
	//*this = pnt;
	return;
}

Point::Point(const float f1, const float f2): _x(f1), _y(f2)
{
    return;
}

Point::~Point (void)
{
	return;
}

Point & Point::operator = (const Point &pnt)
{
	(Fixed) this->_x = pnt.get_x();
	(Fixed) this->_y = pnt.get_y();
	return (*this);
}
