#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_value = other.fixed_point_value;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = nb * 256;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = roundf(nb * 256);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixed_point_value = other.fixed_point_value;
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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

Fixed Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
    int n1; 
    int n2;

    n1 = nb1 / 256;
    n2 = nb2 / 256;
    if (nb1 > nb2)
        return nb1;
    return nb2;
}

Fixed Fixed::min(Fixed &nb1, Fixed &nb2)
{
    int n1; 
    int n2;

    n1 = nb1 / 256;
    n2 = nb2 / 256;
    if (nb1 > nb2)
        return nb1;
    return nb2;
}

Fixed Fixed::max(Fixed &nb1, Fixed &nb2)
{
    int n1; 
    int n2;

    n1 = nb1 / 256;
    n2 = nb2 / 256;
    if (nb1 > nb2)
        return nb1;
    return nb2;
}

Fixed Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
    int n1; 
    int n2;

    n1 = nb1 / 256;
    n2 = nb2 / 256;
    if (nb1 > nb2)
        return nb1;
    return nb2;
}
