#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	current_zombie(name);

	current_zombie.announce();
}