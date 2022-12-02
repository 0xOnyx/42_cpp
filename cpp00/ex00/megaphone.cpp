#include <iostream>

int	main(int argc, const char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t y = 0; y < strlen(argv[i]); y++)
			std::cout << (char)toupper(argv[i][y]);
		std::cout << " ";
	}
	std::cout << std::endl;
}
