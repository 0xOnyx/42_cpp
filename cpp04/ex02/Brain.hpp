#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	Brain	&operator=(const Brain &brain);
private:
	static const int max_ideas = 100;
	std::string	ideas[Brain::max_ideas];
};

#endif
