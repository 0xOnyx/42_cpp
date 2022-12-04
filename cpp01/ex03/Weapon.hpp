#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>


class Weapon
{
	public:
		std::string getType(void);
		void 		setType(std::string);
	private:
		std::string	type;
};

#endif
