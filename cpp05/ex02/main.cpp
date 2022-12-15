#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try{
		Bureaucrat foo("foo", 1);
		PresidentialPardonForm form("bar");

		foo.signForm(form);
		foo.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}

	try{
		Bureaucrat foo("foo", 150);
		PresidentialPardonForm form("bar");

		foo.signForm(form);
		foo.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}

	try{
		Bureaucrat foo("foo", 2);
		RobotomyRequestForm form("bar");

		foo.signForm(form);
		foo.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}

	try{
		Bureaucrat foo("foo", 150);
		RobotomyRequestForm form("bar");

		foo.signForm(form);
		foo.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}

	try{
		Bureaucrat foo("foo1", 1);
		ShrubberyCreationForm form("bar2");

		foo.signForm(form);
		foo.executeForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}



	return (0);
}