#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef	Form	*(*t_func)(std::string &);
typedef struct s_form{
	std::string name;
	t_func		func;
}	t_form;

Intern::Intern()
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
	std::cout << "Copy Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Destrcutor Intern called" << std::endl;
}

Intern	&Intern::operator=(const Intern &intern)
{
	(void)intern;
	std::cout << "Operator affection Intern called" << std::endl;
	return (*this);
}

static Form	*presidential_create(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*robotomy_create(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*shrubber_create(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string name_form, std::string target)
{
	t_form	form[] = {
			{"Presidential pardon", &presidential_create},
			{"Robotomy request", &robotomy_create},
			{"Shrubber creation", &shrubber_create}
	};
	for (int i = 0; i < 3; i++)
	{
		if (form[i].name == name_form)
		{
			std::cout << "Intern create " << name_form << std::endl;
			return (form[i].func(target));
		}
	}
	std::cout << "Can't find class" << std::endl;
	return (NULL);
}