#include "Fixed.hpp"

const int Fixed::NbBits = 8;

Fixed::Fixed(void)
{
    this->fixed_point_value = 0;
}

Fixed::~Fixed(void)
{

}

Fixed::Fixed(const Fixed &other)
{
    this->fixed_point_value = other.fixed_point_value;
}

Fixed::Fixed(const int nb)
{
    this->fixed_point_value = nb * 256;
}

Fixed::Fixed(const float nb)
{
    this->fixed_point_value = roundf(nb * 256);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->fixed_point_value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->fixed_point_value / 256;
}

int Fixed::toInt(void) const
{
    return (this->fixed_point_value / 256);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed obj;

    obj.fixed_point_value = this->fixed_point_value + other.fixed_point_value;
    return obj;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed obj;

    obj.fixed_point_value = this->fixed_point_value - other.fixed_point_value;
    return obj;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed obj;

    obj.fixed_point_value = (this->fixed_point_value * other.fixed_point_value) / 256;
    return obj;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed obj;

    obj.fixed_point_value = (this->fixed_point_value * 256) / other.fixed_point_value;
    return obj;
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->fixed_point_value > other.fixed_point_value)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this->fixed_point_value < other.fixed_point_value)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->fixed_point_value <= other.fixed_point_value)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this->fixed_point_value >= other.fixed_point_value)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this->fixed_point_value != other.fixed_point_value)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->fixed_point_value == other.fixed_point_value)
        return (true);
    return (false);
}

Fixed Fixed::operator++()
{
    this->fixed_point_value++;
    return *this;
}

Fixed Fixed::operator--()
{
    this->fixed_point_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed a;

    a.fixed_point_value = this->fixed_point_value;
    this->fixed_point_value--;
    return a;
}

Fixed Fixed::operator++(int)
{
    Fixed a;

    a.fixed_point_value = this->fixed_point_value;
    this->fixed_point_value++;
    return a;
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1 < nb2)
        return nb1;
    return nb2;
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1 > nb2)
        return nb1;
    return nb2;
}

const Fixed &Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 > nb2)
        return nb1;
    return nb2;
}

const Fixed &Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 < nb2)
        return nb1;
    return nb2;
}
