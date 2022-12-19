#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_set, Weapon &weapon_to_set)
	:weapon(weapon_to_set), name(name_to_set)
{
	if (name.empty())
		std::cerr << "please set a correct name" << std::endl;
}

HumanA::HumanA(const HumanA &humanA) :weapon(humanA.weapon)
{
	this->name = humanA.name;
}

HumanA::~HumanA()
{
	std::cout << "[INFO]\thuman " << this->name << "as be destroy" << std::endl;
}

HumanA	&HumanA::operator=(const HumanA &humanA)
{
	this->name = humanA.name;
	this->weapon = humanA.weapon;
	return (*this);
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
