#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat bureaucrat("Foo", 1);
		bureaucrat.increment();
	}
	catch(std::exception &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat("Foo", 400);
	}
	catch(std::exception &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat("Foo", 149);
		bureaucrat.decrement();
		bureaucrat.decrement();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}
	return (0);
}