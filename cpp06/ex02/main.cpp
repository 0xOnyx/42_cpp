#include <iostream>
#include <time.h>
#include <stdlib.h>

class Base { public: virtual ~Base(void){}};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void)
{
	int rand_value;

	srand(time(NULL));
	rand_value = rand() % 3;
	if (rand_value == 0)
		return (new A);
	if (rand_value == 1)
		return (new B);
	if (rand_value == 2)
		return (new C);
	return (NULL);
}

void identify(Base *p)
{
	std::cout << "the actual type of the pointer is ";

	if (!dynamic_cast<A *>(p))
		std::cout << "of type Class A";
	else if (!dynamic_cast<B *>(p))
		std::cout << "of type Class B";
	else if (!dynamic_cast<C *>(p))
		std::cout << "of type Class C";
	else
		std::cout << "is not defined";
	std::cout << std::endl;
}

void identify(Base &p)
{
	std::cout << "the actual type of the reference is ";
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "of type Class A";
	}
	catch(std::bad_cast const &e){}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "of type Class B";
	}
	catch(std::bad_cast const &e){}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "of type Class C";
	}
	catch(std::bad_cast const &e){}

	std::cout << std::endl;

}

int main(void)
{
	Base	*base;

	base = generate();
	if (base == nullptr)
		return (1);
	identify(base);
	identify(*base);

	delete base;
	return (0);
}