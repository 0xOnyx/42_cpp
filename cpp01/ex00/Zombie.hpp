#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(const Zombie &copy);
		~Zombie(void);
		void 	announce(void) const;
	private:
		std::string	name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string	name);


#endif
