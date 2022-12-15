
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("Robotomy", 72, 45),
	target("default")
{
	std::cout << "Default Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string set_target)
	:Form("Robotomy", 72, 45),
	target(set_target)
{
	std::cout << "String Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
	:Form("Robotomy", 72, 45),
	target(robotomyRequestForm.target)
{
	std::cout << "Operator affection Robotomy called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor Robotomy called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	this->target = copy.target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{


