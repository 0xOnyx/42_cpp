#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	Convert convert;

	if (argc != 2)
	{
		std::cout << "usage rr" << argv[0] << " {type to use}" << std::endl;
		return (1);
	}
	try
	{
		convert = Convert(argv[1]);
		convert.detect_type();
		convert.print_element();
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << "error bad argument" << std::endl;
	}
	return (0);
}