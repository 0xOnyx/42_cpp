#include "Form.hpp"

Form::Form() :name("Form"), is_sign(false), grade_sign(1), grade_exec(1)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string set_name, int set_grade_sign, int set_grade_exec)
	:name(set_name), is_sign(false), grade_sign(set_grade_sign), grade_exec(set_grade_exec)
{
	if (this->grade_sign > 150 || this->grade_exec > 150)
		throw Form::GradeTooLowException();
	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw Form::GradeTooHighException();
	std::cout << "String Form constructor called" << std::endl;
};

Form::Form(const Form &form)
	:name(form.name), is_sign(form.is_sign), grade_sign(form.grade_sign), grade_exec(form.grade_exec)
{
	std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor Form called" << std::endl;
}

Form	&Form::operator=(const Form &form)
{
	this->is_sign = form.is_sign;
	std::cout << "Only is sign is copy" << std::endl;
	std::cout << "Operator affectation is called" << std::endl;
	return (*this);
}

const std::string	&Form::get_name() const
{
	return (this->name);
}

bool	Form::get_sign() const
{
	return (this->is_sign);
}

int	Form::get_grade_sign() const
{
	return (this->grade_sign);
}

int	Form::get_grade_exec() const
{
	return (this->grade_exec);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.get_grade() <= this->grade_sign)
		this->is_sign = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::checkExecutability(Bureaucrat const &excutor) const
{
	if (this->is_sign)
		throw Form::FormNotSignedException();
	if (excutor.get_grade() > this->grade_exec)
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is to low !");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is to high !");
}

const char	*Form::FormNotSignedException::what() const throw()
{
	return ("Form is not Signed !");
}