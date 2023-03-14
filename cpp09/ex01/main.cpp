#include <iostream>
#include <queue>
#include <sstream>
#include <ctype.h>

int calc(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '/')
		return (a / b);
	else if (c == '*')
		return (a * b);
	return (a);
}

int	main(int argc, char **argv)
{
	char 				c;
	std::queue<int>		q;
	std::istringstream	ss;
	std::string 		line;

	try{
		if (argc != 2)
			throw std::runtime_error("not enough argument");
		ss.str(argv[1]);
		while (getline(ss, line, ' '))
		{
			c = line[0];
			if (isdigit(c))
				q.push(c - 48);
			else if (c == '+' || c == '-' || c == '/' || c == '*')
			{
				int a = q.front(); q.pop();
				int b = q.front(); q.pop();
				q.push(calc(a, b, c));
			}
			else
				throw std::runtime_error("bad element in argument");
		}
		std::cout << q.front() << std::endl;
	}
	catch(std::runtime_error const &e)
	{
		std::cout << "[FAILED]\t" << e.what() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "[EXCEPTION]\t" << e.what() << std::endl;
	}
}