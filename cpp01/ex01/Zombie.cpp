#include "Zombie.hpp"

Zombie::Zombie(std::string current_name) :name(current_name)
{
	if (name.length() == 0)
		std::cout << "you must set a name for the zombie" << std::endl;
}

Zombie::Zombie(const Zombie &copy) :name(copy.name)
{
	if (name.length() == 0)
		std::cout << "you must set a name for the zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "the zombie name " << this->name << " is destroy" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
