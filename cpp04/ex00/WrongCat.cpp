
#include "WrongCat.hpp"

WrongCat::WrongCat() :WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat) :WrongAnimal()
{
	this->type = wrongCat.type;
	std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	this->type = wrongCat.type;
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat make sound" << std::endl;
}
