#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "[INFO]\tAddress of brain string\t=> " << &brain		<< std::endl;
	std::cout << "[INFO]\tAddress of stringPTR\t=> "	<< stringPTR	<< std::endl;
	std::cout << "[INFO]\tAddress of stringREF\t=> "	<< &stringREF	<< std::endl;

	std::cout << std::endl;

	std::cout << "[INFO]\tValue of string\t\t\t=> "		<< brain		<< std::endl;
	std::cout << "[INFO]\tValue of stringPTR\t\t=> " 	<< *stringPTR	<< std::endl;
	std::cout << "[INFO]\tValue of stringREF\t\t=> "	<< stringREF	<< std::endl;
	return (0);
}