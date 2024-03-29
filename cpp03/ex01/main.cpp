#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap foo("foo");
	ScavTrap bar("bar");

	bar.attack("foo");
	foo.takeDamage(20);

	foo.beRepaired(5);

	bar.guardGate();

	std::cout << std::endl;
	return (0);
}