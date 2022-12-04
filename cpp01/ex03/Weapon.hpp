#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type_to_set);
		Weapon(const Weapon &weapon);
		~Weapon();
		Weapon &operator=(const Weapon& weapon);
		const std::string		&getType() const;
		void 			setType(std::string type_to_set);
	private:
		std::string	type;
};

#endif
