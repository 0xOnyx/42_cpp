#include <string>
#include <iostream>
#include "iter.tpp"

void 	print_elem(const std::string &str)
{
	std::cout << "OUT => " << str << std::endl;
}

int	main()
{
	std::string	tab[3];

	tab[0] = "HELLO";
	tab[1] = "WORLD";
	tab[2] = "!";

	iter<std::string>(tab, 3, print_elem);
	return (0);
}




