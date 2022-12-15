#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	os;

	this->checkExecutability(executor);
	os.open((this->target + "_shrubbery").c_str(), std::ofstream::out);
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
