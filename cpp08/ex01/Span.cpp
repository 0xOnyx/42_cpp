#include "Span.hpp"

Span::Span() :_n(0), _tab(0)
{
	std::cout << "Default constructor is called" << std::endl;
}

Span::Span(unsigned int n) :_n(n), _tab(0)
{
	std::cout << "Unsigned int constructor is called" << std::endl;
}

Span::Span(const Span &span) :_n(span._n), _tab(0)
{
	std::cout << "Copy constructor is called" << std::endl;
}

Span	&Span::operator=(const Span &span)
{
	this->_n = span._n;
	this->_tab = span._tab;
	std::cout << "Operator d'affection is called" << std::endl;
	return (*this);
}

Span::~Span()
{
	std::cout << "Deconstructor is called" << std::endl;
}

void	Span::addNumber(int nbr)
{
	if (this->_tab.size() >= this->_n)
		throw std::out_of_range("the tab is full !");
	this->_tab.push_back(nbr);
}

int	Span::shortestSpan(void)
{
	int							res;
	std::vector<int>::iterator 	iter;
	std::vector<int>			tmp;

	if (this->_tab.size() <= 1)
		throw std::logic_error("tab is empty");
	tmp = this->_tab;
	std::sort(tmp.begin(), tmp.end());
	res = *(tmp.begin() + 1) - *(tmp.begin());
	for (iter = tmp.begin() + 1; iter + 1!= tmp.end(); iter++)
	{
		if (*(iter + 1) - *(iter) < res)
			res = *(iter + 1) - *(iter);
	}
	return (res);
}

int	Span::longestSpan(void)
{
	unsigned int				res;
	std::vector<int>			tmp;

	if (this->_tab.size() <= 1)
		throw std::logic_error("tab is empty");
	tmp = this->_tab;
	std::sort(tmp.begin(), tmp.end());
	res = (*(tmp.end() - 1) - *tmp.begin());
	return (res);
}

void	Span::fill_with_rand(unsigned int nbr)
{
	std::srand(std::time(NULL));

	for (unsigned int i = 0; i < nbr; i++)
		this->_tab.push_back(std::rand() % nbr + 1);
}

void 	Span::fill_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);

	if (tmp.size() > this->_n - this->_tab.size())
		throw std::out_of_range("your fill more information i")
}