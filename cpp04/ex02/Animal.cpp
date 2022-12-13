#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}