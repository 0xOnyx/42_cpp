#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	dup(name);
	Zombie	*current_zombie;

	current_zombie = new(std::nothrow) Zombie[N];
	for (int i = 0; i < N; i++)
		current_zombie[i] = dup;
	return (current_zombie);
}