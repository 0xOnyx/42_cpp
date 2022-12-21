#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <ctime>
# include <cstdlib>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(const Span &span);
	void addNumber(int nbr);
	int shortestSpan(void);
	int longestSpan(void);
	Span	&operator=(const Span &span);
	~Span();
	void	fill_with_rand(unsigned int nbr);
	void 	fill_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
private:
	unsigned int		_n;
	std::vector<int>	_tab;
};

#endif