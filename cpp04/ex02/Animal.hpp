#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
public:
	virtual ~Animal() = 0;
	virtual Animal	&operator=(const Animal &animal) = 0;
	virtual void	makeSound() const = 0;
	std::string 	getType() const;
protected:
	Animal();
	Animal(Animal const &animal);
	std::string	type;
};

#endif
