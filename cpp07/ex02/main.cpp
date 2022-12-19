#include <iostream>
#include "Array.tpp"

int	main(void)
{
	Array<int>	array_a(5);

	array_a[0] = 1;
	array_a[1] = 2;
	array_a[2] = 3;
	std::cout << "len of array => " << array_a.size() << std::endl;
	for (unsigned int i = 0; i < array_a.size(); i++)
		std::cout << "value =>" << array_a[i] << std::endl;
	return (0);
}