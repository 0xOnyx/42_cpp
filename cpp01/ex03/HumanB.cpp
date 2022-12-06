
#include "HumanB.hpp"

HumanB::HumanB(std::string name_to_set)
	:name(name_to_set)
{
	if (name.empty())
		std::cerr << "please set a correct name" << std::endl;
}

HumanB::HumanB(std::string name_to_set, Weapon &weapon)
	:name(name_to_set), weapon(&weapon)
{
	if (name.empty())
}