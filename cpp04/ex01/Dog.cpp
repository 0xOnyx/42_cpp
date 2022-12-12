#include "Dog.hpp"

Dog::Dog() :Animal()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &dog) :Animal()
{
	this->type = dog.type;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound" << std::endl;
}
