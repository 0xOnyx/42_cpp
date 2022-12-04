#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_set, Weapon &weapon_to_set)
	:name(name_to_set), weapon(weapon_to_set)
{
	if (name.empty())
		std::cerr << "please set a correct name" << std::endl;
}
