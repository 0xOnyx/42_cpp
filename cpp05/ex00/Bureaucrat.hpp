#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string set_name, int set_grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &copy);
	std::string get_name() const;
	int 		get_grade() const;
	void 		increment();
	void 		decrement();
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