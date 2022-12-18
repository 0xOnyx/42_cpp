#include <iostream>
#include <cstdint>

struct Data {
	int x;
	int y;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	uintptr_t 	ptr;
	Data		data;
	Data		*out;

	data.x = 1;
	data.y = 2;
	ptr = serialize(&data);
	out = deserialize(ptr);
	if (out == &data)
		std::cout << "the pointer is equal !" << std::endl;
	else
		std::cout << "is shit bro :/" << std::endl;
	return (0);
}