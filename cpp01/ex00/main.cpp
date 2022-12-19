#include "Zombie.hpp"

int main(void)
{
	Zombie	*new_zombie;

	new_zombie = newZombie("Foo");
	new_zombie->announce();
	delete new_zombie;

	randomChump("Bar");

	return (0);
}
