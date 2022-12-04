#include "Zombie.hpp"

Zombie	*newZombie(std::string	name)
{
	Zombie	*current_zombie;

	current_zombie = new(std::nothrow) Zombie(name);
	if (!current_zombie)
	{
		std::cout << "[ERROR]\tMemory allocation failed" << std::endl;
		return (NULL);
	}
	return (current_zombie);
}