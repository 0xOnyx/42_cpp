#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try{
		Intern	intern;
		Form	*form;
		Bureaucrat foo("foo", 1);

		form = intern.makeForm("Presidential pardon", "FOO");
		foo.signForm(*form);
		foo.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[ERROR]\t" << e.what() << std::endl;
	}




	return (0);
}