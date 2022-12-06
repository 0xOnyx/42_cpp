
#include "HumanB.hpp"

HumanB::HumanB(std::string name_to_set)
	:name(name_to_set)
{
	this->weapon = NULL;
	if (name.empty())
		std::cerr << "please set a correct name" << std::endl;
}

HumanB::HumanB(std::string name_to_set, Weapon &weapon)
	:name(name_to_set), weapon(&weapon)
{
	if (name.empty())
		std::cerr << "please set a correct name" << std::endl;
}

HumanB::HumanB(const HumanB &human_b)
{
	this->weapon = human_b.weapon;
	this->name = human_b.name;
}

HumanB::~HumanB()
{
	std::cout << "[INFO]\thuman" << this->name << "as be destroy" << std::endl;
}

HumanB	&HumanB::operator=(const HumanB &human_b)
{
	this->name = human_b.name;
	this->weapon = human_b.weapon;
	return (*this);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void 	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}