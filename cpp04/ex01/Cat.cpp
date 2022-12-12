#include "Cat.hpp"

Cat::Cat() :Animal()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &cat) :Animal()
{
	this->type = cat.type;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound" << std::endl;
}
