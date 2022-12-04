#include "Weapon.hpp"

Weapon::Weapon(std::string type_to_set) :type(type_to_set)
{
	if (type_to_set.empty())
		std::cerr << "please set a type for the weapon" << std::endl;
}

Weapon::Weapon(const Weapon &weapon)
{
	this->type = weapon.type;
}

Weapon::~Weapon()
{
	std::cerr << "weapon a destroy" << std::endl;
}

Weapon	&Weapon::operator=(const Weapon &weapon)
{
	this->type = weapon.type;
	return (*this);
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string  type_to_set)
{
	this->type = type_to_set;
}