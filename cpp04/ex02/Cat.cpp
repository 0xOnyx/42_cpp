#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &cat)
 : Animal(cat) {
	this->brain = new Brain(*cat.brain);
	this->type = cat.type;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	*(this->brain) = *(cat.brain);
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound" << std::endl;
}
