#ifndef CPP_FIXED_HPP
# define CPP_FIXED_HPP
# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	~Fixed(void);
	Fixed	&operator=(const Fixed &fixed);
	int		getRawBits(void);
	void	setRawBits(int const raw);
private:
	int					nb;
	static const int	bits = 8;
};

#endif
