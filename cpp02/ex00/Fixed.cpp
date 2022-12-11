#include "Fixed.hpp"

Fixed::Fixed() :nb(0)
{
	std::cout << "Default constructor called" << std::endl;
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