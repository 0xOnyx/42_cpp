#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form("Shrubbery", 145, 137),
	target("default")
{
	std::cout << "Default Shrubber constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string set_target)
	:Form("Shrubbery", 145, 137),
	target(set_target)
{
	std::cout << "String Shrubber constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery_creation_form)
	:Form("Shrubbery", 145, 137),
	target(shrubbery_creation_form.target)
{
	std::cout << "Copy Shrubbery called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor Shrubbery called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->target = copy.target;
	std::cout << "Operator affection Shrubbery is called" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	os;

	this->checkExecutability(executor);
	os.open((this->target + "_shrubbery").c_str(), std::ios::out);
	if (os.is_open())
	{
		os << "                                  # #### ####\n"
			  "                                ### \\/#|### |/####\n"
			  "                               ##\\/#/ \\||/##/_/##/_#\n"
			  "                             ###  \\/###|/ \\/ # ###\n"
			  "                           ##_\\_#\\_\\## | #/###_/_####\n"
			  "                          ## #### # \\ #| /  #### ##/##\n"
			  "                           __#_--###`  |{,###---###-~\n"
			  "                                     \\ }{\n"
			  "                                      }}{\n"
			  "                                      }}{\n"
			  "                                 ejm  {{}\n"
			  "                                , -=-~{ .-^- _\n"
			  "                                      `}\n"
			  "                                       {";
		os.close();
	}
}
