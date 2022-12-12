#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &dog);
	~Dog();
	Dog	&operator=(const Dog &dog);
	void	makeSound() const;
};

#endif