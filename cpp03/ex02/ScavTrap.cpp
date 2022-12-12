#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string set_name) :ClapTrap(set_name)
{
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "String constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_points <= 0 || this->hits_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy or no point left" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "ScavTrap " << this->name << " attacks "
			  << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap get into mode Gate keeper" << std::endl;
}