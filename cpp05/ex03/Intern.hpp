#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &intern);
	~Intern();
	Intern	&operator=(const Intern &intern);
	Form *makeForm(std::string name_form, std::string target);
};

#endif