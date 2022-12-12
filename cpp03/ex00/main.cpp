#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clp("marvin");

	clp.attack("42");
	clp.takeDamage(6);
	clp.beRepaired(4);
	clp.takeDamage(3);
	clp.beRepaired(8);
	clp.takeDamage(17);

	return (0);
}