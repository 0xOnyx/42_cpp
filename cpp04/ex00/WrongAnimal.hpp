#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &wrong_animal);
	virtual ~WrongAnimal();
	WrongAnimal	&operator=(const WrongAnimal &wrong_animal);
	void	makeSound() const;
	std::string 	getType() const;
protected:
	std::string	type;
};

#endif
