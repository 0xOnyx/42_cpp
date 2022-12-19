
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hits_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string set_name) :ClapTrap(set_name)
{
	this->hits_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "String constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->energy_points <= 0 || this->hits_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " has no energy or no point left" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "FragTrap " << this->name << " attacks "
			  << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "highFivesGuys" << std::endl;
}