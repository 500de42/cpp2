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
        Fixed &min( Fixed &nb1, Fixed &nb2);
        static const Fixed &max(const Fixed &nb1, const Fixed &nb2);
        static const Fixed &min (const Fixed &nb1, const Fixed &nb2);
        Fixed &max (Fixed &nb1, Fixed &nb2);
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        Fixed operator++(int);//x++
        Fixed operator++();//++x
        Fixed operator--(int);
        Fixed operator--();
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);
#endif