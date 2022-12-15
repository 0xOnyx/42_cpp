
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
	void	execute(Bureaucrat const &executor);
private:

};

#endif