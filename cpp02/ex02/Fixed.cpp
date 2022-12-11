#include "Fixed.hpp"

Fixed::Fixed() :nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float float_nb)
{
	this->nb = float_nb * (1 << Fixed::bits);
	std::cout << "Float contructor called" << std::endl;
}

Fixed::Fixed(const int int_nb)
{
	this->nb = int_nb << Fixed::bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->nb = fixed.nb;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	this->setRawBits(fixed.nb);
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float 	Fixed::toFloat() const
{
	return ((float)this->nb / (float)(1 << Fixed::bits));
}

int 	Fixed::toInt() const
{
	return (this->nb >> Fixed::bits);
}

std::ostream	&operator<<(std::ostream &os, Fixed const	&fixed)
{
	os << fixed.toFloat();
	return (os);
}