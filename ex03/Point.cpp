#include "Point.hpp"

Fixed Point::get_fixed_y(void)
{
    return(this->y);
}

Fixed Point::get_fixed_x(void)
{
    return(this->x);
}

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float nb1, const float nb2) : x(nb1), y(nb2)
{
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point::~Point(void)
{
}

bool Point::operator!=(const Point &other) const
{
    return (this->x != other.x || this->y != other.y);
}

Point &Point::operator=(const Point &other)
{
    return *this;
}
