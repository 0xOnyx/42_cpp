#include "Dog.hpp"

Dog::Dog() :Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &dog) :Animal()
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	*(this->brain) = *(dog.brain);
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound" << std::endl;
}
