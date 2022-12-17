#include "Fixed.hpp"

Fixed::Fixed() :nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float float_nb)
{
	this->nb = roundf(float_nb * (1 << Fixed::bits));
	std::cout << "Float contructor called" << std::endl;
}

Fixed::Fixed(const int int_nb)
{
	this->nb = int_nb << Fixed::bits;
	std::cout << "Int constructor called" << std::endl;;
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

int	Fixed::getRawBits(void) const
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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool 	Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool 	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool 	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool 	Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool 	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed	res(this->toFloat() + fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed	res(this->toFloat() - fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed	res(this->toFloat() * fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed res(this->toFloat() / fixed.toFloat());
	return (res);
}

Fixed	&Fixed::operator++()
{
	this->nb += 1;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->nb -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	res(*this);
	this->nb += 1;
	return (res);
}

Fixed	Fixed::operator--(int)
{
	Fixed	res(*this);
	this->nb += 1;
	return (res);
}

std::ostream	&operator<<(std::ostream &os, Fixed const	&fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}