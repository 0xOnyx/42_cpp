#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :name(""), hits_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string set_name) :name(set_name), hits_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hits_points = copy.hits_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_points <= 0 || this->hits_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has energy point left" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name << " attacks "
		<< target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hits_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has dead" << std::endl;
		return ;
	}
	this->hits_points -= amount;
	std::cout << "ClapTrap " << this->name << " take damage " << amount
		<< ", he has " << this->hits_points << " hit points left" << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hits_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has energy point left" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	this->hits_points += amount;
	std::cout << "ClapTrap " << this->name << " reapair and win "
			  << amount << " points of life ! he now has " << this->hits_points << std::endl;
}
