#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap foo("foo");
	ScavTrap bar("bar");
	FragTrap baz("baz");

	bar.attack("foo");
	foo.takeDamage(20);

	foo.beRepaired(5);

	bar.guardGate();
	baz.highFivesGuys();

	std::cout << std::endl;
	return (0);
}