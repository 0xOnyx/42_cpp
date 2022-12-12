#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string set_name);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &copy);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	int 		hits_points;
	int 		energy_points;
	int 		attack_damage;
};

#endif