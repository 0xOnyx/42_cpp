#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const float float_nb);
	Fixed(const int int_nb);
	Fixed(const Fixed &fixed);
	~Fixed(void);
	Fixed	&operator=(const Fixed &fixed);
	bool 	operator>(const Fixed &fixed) const;
	bool 	operator<(const Fixed &fixed) const;
	bool 	operator>=(const Fixed &fixed) const;
	bool 	operator<=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool 	operator!=(const Fixed &fixed) const;
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
private:
	int					nb;
	static const int	bits = 8;
};

std::ostream	&operator<<(std::ostream &os, Fixed const	&fixed);

#endif
