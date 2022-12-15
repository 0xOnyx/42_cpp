#ifndef FORM_HPP
# define FORM_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string set_name, int set_grade_sign, int set_grade_exec);
	Form(const Form &form);
	~Form();
	Form	&operator=(const Form &form);
	const std::string	&get_name() const;
	bool	get_sign() const;
	int		get_grade_sign() const;
	int		get_grade_exec() const;
	void	beSigned(Bureaucrat const &bureaucrat);
	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
private:
	const std::string	name;
	bool 				is_sign;
	const int			grade_sign;
	const int			grade_exec;
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif