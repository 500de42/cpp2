#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private :
        Fixed const x;
        Fixed const y;
    public :
    //constructeurs/destructeur
        Point();
        ~Point();
        Point(const Point &other);
        Point(const float nb1, const float nb2);
    //Other
        Point &operator=(const Point &copy);
        bool operator!=(const Point &other) const;
        Fixed get_fixed_x(void);
        Fixed get_fixed_y(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
