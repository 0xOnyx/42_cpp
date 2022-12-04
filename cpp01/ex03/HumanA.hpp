#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name_to_set, Weapon &weapon_to_set);
		HumanA(conat HumanA &humanA);
		~HumanA();
		HumanA	&operator=(const HumanA&);
		void	attack();
	private:
		Weapon		&weapon;
		std::string name;
};

#endif
