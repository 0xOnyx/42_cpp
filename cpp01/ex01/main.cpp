#include "Zombie.hpp"

int main(void)
{
	int 	number;
	Zombie	*hord;

	number = 10;
	hord = zombieHorde(number, "BOB");
	for (int i = 0; i < number; i++)
		hord[i].announce();
	delete [] hord;
	return (0);
}