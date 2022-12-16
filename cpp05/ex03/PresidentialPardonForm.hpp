#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &presidential_pardon_form);
	PresidentialPardonForm(std::string set_target);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	void	execute(Bureaucrat const &executor) const;

private:
	std::string	target;
};

#endif