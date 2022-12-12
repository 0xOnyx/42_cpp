#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public:
	Brain();
	~Brain();
private:
	static const int max_ideas = 100;
	std::string	ideas[Brain::max_ideas];
};

#endif
