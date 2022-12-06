#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name_to_set);
		HumanB(std::string name_to_set, Weapon &weapon);
		HumanB(const HumanB &human_b);
		~HumanB();
		HumanB	&operator=(const HumanB& human_b);
		void setWeapon(Weapon &weapon);
		void attack();
	private:
		Weapon		*weapon;
		std::string name;
};

#endif