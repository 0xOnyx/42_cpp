
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Deconstructor Brain called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Constructor copy Brain called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < Brain::max_ideas; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}