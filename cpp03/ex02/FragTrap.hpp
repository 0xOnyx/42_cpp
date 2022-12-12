#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string set_name);
	~FragTrap();
	void	attack(const std::string &target);
	void	highFivesGuys(void);
};

#endif
