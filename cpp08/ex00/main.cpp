#include <vector>
#include "easyfind.tpp"

int	main()
{
	std::vector<int>					tab;
	std::vector<int>::const_iterator	res;

	for (int i = 0; i < 10; i++)
		tab.push_back(i);
	try
	{
		res = easyfind(tab, 3);
		std::cout << "value of find => " << *res << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << e.what();
	}
	try
	{
		res = easyfind(tab, 17);
		std::cout << "value of find => " << *res << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << e.what();
	}


	return (0);
}