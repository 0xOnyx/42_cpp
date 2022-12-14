#include "Animal.hpp"

Animal::Animal() :type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
	this->type = animal.type;
	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "Operator affection called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}