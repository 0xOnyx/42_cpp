#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string set_name, int set_grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat(void);
	Bureaucrat	&operator=(const Bureaucrat &copy);
	const std::string &get_name() const;
	int 		get_grade() const;
	void 		increment();
	void 		decrement();
	void		signForm(Form &form);
	class		GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class		GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
private:
	std::string	name;
	int 		grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif