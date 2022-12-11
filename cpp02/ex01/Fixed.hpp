#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const float float_nb);
	Fixed(const int int_nb);
	Fixed(const Fixed &fixed);
	~Fixed(void);
	Fixed &operator=(const Fixed &fixed);
	Fixed
	int		getRawBits();
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
private:
	int					nb;
	static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const	&fixed);

#endif