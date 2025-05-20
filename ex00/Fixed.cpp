#include "Fixed.hpp"

const int Fixed::NbBits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_value = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixed_point_value = other.getRawBits();
    }
    return *this;
}

