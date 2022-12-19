#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template <typename T>
class Array
{
public:
	Array<T>(void) :tab(0), len(0)
	{
		std::cout << "Default constructor Array is called" << std::endl;
	}
	Array<T>(unsigned int n) :tab(new T[n]), len(n)
	{
		std::cout << "Unsigned int constructor Array is called" << std::endl;
	}
	Array<T>(const Array<T> &copy)
	{
		*this = copy;
		std::cout << "Constructor copy is called" << std::endl;
	}
	~Array<T>()
	{
		delete [] this->tab;
		std::cout << "Deconstructor array is called" << std::endl;
	}
	Array<T>	&operator=(const Array<T> &copy)
	{
		this->len = copy.len;
		this->tab = new T[copy.len];
		for (unsigned int i = 0; i < copy.len; i++)
			this->tab[i] = copy.tab[i];
		std::cout << "Operator affection array is called" << std::endl;
		return (*this);
	}
	T	&operator[](std::size_t idx)
	{
		if (idx >= this->len)
			throw std::overflow_error("Index is out of box");
		return (this->tab[idx]);
	}
	unsigned int	size(void) const
	{
		return (this->len);
	}
private:
	T				*tab;
	unsigned int	len;

};

#endif
