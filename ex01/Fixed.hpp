#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed
{
    private :
        int fixed_point_value;
        const int static NbBits;
    public :
        Fixed(void);
        Fixed(int const);
        Fixed(float const);
        ~Fixed(void);
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);
#endif