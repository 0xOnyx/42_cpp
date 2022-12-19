#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name(""), grade(0)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string set_name, int set_grade) :name(set_name), grade(set_grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "String Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	this->name = bureaucrat.name;
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->name = copy.name;
	this->grade = copy.grade;
	std::cout << "Operator affection called" << std::endl;
	return (*this);
}

void		Bureaucrat::signForm(Form &form)
{
	try{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.get_name() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << this->name << " couldn’t sign "
				  << form.get_name() << " because " << e.what() << std::endl;
	}
}

const std::string	&Bureaucrat::get_name() const
{
	return (this->name);
}

int	Bureaucrat::get_grade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void	Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is to High !");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to Low !");
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade() << ".";
	return (os);
}
