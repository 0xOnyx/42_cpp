#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string set_name);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

#endif
