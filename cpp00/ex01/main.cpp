#include <iostream>
#include "PhoneBook.hpp"

# define NAME "PhoneBook $"

void	get_command(std::string &command)
{
	std::cout << NAME;
	while (command.empty())
		std::getline(std::cin, command);
}

bool	exec_command(std::string &command, int &end, PhoneBook &book)
{
	if (!command.compare("EXIT"))
	{
		end = 0;
		return (false);
	}
	if (!command.compare("ADD"))
	{
		book.add_contact();
		return (false);
	}
	if (!command.compare("SEARCH"))
	{
		book.search_contact();
		return (false);
	}
	return (true);
}

int main(void)
{
	PhoneBook	book;
	std::string command;
	int			end;

	end = 1;
	while (end)
	{
		get_command(command);
		if (exec_command(command, end, book))
			std::cerr << "[ERROR]\tthis is not a command" << std::endl;
		command.resize(0);
	}
	std::cout << "[INFO]\tend of the process" << std::endl;
	return (0);
}