#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main(void) {
	const Animal *j = new Dog();
	const Animal *x = new Cat();

	delete j;
	delete x;

	const Animal *animals[10];
	for (int i = 0; i < 10; i++) {
		if (i < 10 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return (0);
}