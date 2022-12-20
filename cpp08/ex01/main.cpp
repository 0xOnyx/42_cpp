#include "Span.hpp"
#define NBR_TEST 4

int main()
{
	Span	span(NBR_TEST);

	try
	{
		span.fill_with_rand(NBR_TEST);
		span.addNumber(1);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}
	try
	{
		int res;

		res = span.longestSpan();
		std::cout << "longestSpan is => " << res << std::endl;

		res = span.shortestSpan();
		std::cout << "shorttestspan is =>" << res << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}

	//TEST PDF =>
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}