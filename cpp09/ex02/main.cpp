#include <deque>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <exception>
#include <time.h>
#include <sstream>
#include "PmergeMe.hpp"

std::string get_tab(char **argv, int argc)
{
	std::ostringstream 			ss;
	int							i;

	i = 0;
	while (i < argc)
	{
		ss << argv[i++];
		if (i != argc)
			ss << " ";
	}
	return (ss.str());
}

std::string get_tab(std::vector<int> &tab)
{
	std::ostringstream 			ss;
	std::vector<int>::iterator	iter;

	for (iter = tab.begin(); iter != tab.end(); iter++)
	{
		ss << *iter;
		if (iter + 1 != tab.end())
			ss << " ";
	}
	return (ss.str());
}

int main(int argc, char **argv)
{
	clock_t				t_vector;
	clock_t				t_stack;
	std::vector<int>	tab;
	std::deque<int>		stack;
	int 				n;

	try{
		n = argc - 1;
		t_vector = clock();
		fill_vector(argv + 1, argc - 1, tab);
		sort_vector(tab);
		t_vector = clock() - t_vector;

		t_stack = clock();
		fill_stack(argv + 1, argc - 1, stack);
		sort_stack(stack);
		t_stack = clock() - t_stack;

		std::cout << "Before:\t" << get_tab(argv + 1, argc - 1) << std::endl;
		std::cout << "After:\t" << get_tab(tab) << std::endl;
		std::cout << "Time to process a rang of " << n << " elements with std::vector : " << (double)(t_vector) / CLOCKS_PER_SEC * 100000 << "us" << std::endl;
		std::cout << "Time to process a rang of " << n << " elements with std::deque : " << (double)(t_stack) / CLOCKS_PER_SEC * 100000 << "us" << std::endl;
	}
	catch(std::runtime_error const &e)
	{
		std::cout << "[FAILED]\t" << e.what() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "[ERROR]\t" << e.what() << std::endl;
	}
	return (0);
}