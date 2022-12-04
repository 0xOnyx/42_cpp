#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(){};
		Zombie(std::string name);
		Zombie(const Zombie &copy);
		~Zombie(void);
		Zombie &operator=(const Zombie &copy);
		void 	announce(void) const;
	private:
		std::string	name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string	name);
Zombie	*zombieHorde(int N, std::string name);

#endif
