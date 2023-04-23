#include "Harl.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "pleas give me in arg -> " << std::endl;
		std::cout << "debug - info - warning - error" << std::endl;
		return (1);
	}
	Harl harl;

	harl.complain(argv[1]);
	return (0);
}