#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form("Presidential", 25, 5),
	target("default")
{
	std::cout << "Default Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential_pardon_form)
	:Form("Presidential", 25, 5),
	target(presidential_pardon_form.target)
{
	std::cout << "Copy Presidential called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string set_target)
	:Form("Presidential", 25, 5),
	target(set_target)
{
	std::cout << "String Presidential constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor Presidential called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	this->target = copy.target;
	std::cout << "Operator affection Presidential called" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExecutability(executor);
	std::cout << "the " << this->target << " to be forgiven by Zaphod Bebleborx" << std::endl;
}