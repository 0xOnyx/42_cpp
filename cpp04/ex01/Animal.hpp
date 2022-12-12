#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
public:
	Animal();
	Animal(Animal const &animal);
	virtual ~Animal();
	Animal	&operator=(const Animal &animal);
	virtual void	makeSound() const;
	std::string 	getType() const;
protected:
	std::string	type;
};

#endif
