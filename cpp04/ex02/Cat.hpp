#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &cat);
	~Cat();
	Cat	&operator=(const Cat &cat);
	void makeSound() const;
private:
	Brain	*brain;
};

#endif