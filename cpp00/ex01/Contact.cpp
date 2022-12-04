#include "Contact.hpp"
#include <ctype.h>

bool	Contact::set_first_name(const std::string str)
{
	this->first_name = str;
	return (true);
}

bool	Contact::set_last_name(const std::string str)
{
	this->last_name = str;
	return (true);
}

bool	Contact::set_nickname(const std::string str)
{
	this->nickname = str;
	return (true);
}

bool	Contact::set_phone_number(const std::string str)
{
	std::string::const_iterator current;

	for (current = str.begin(); current != str.end(); current++)
	{
		if (!isdigit(*current) && *current != ' ')
			return (false);
	}
	this->phone_number = str;
	return (true);
}

bool	Contact::set_darkest_secret(const std::string str)
{
	this->darkest_secret = str;
	return (true);
}

std::string Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name() const
{
	return (this->last_name);
}

std::string Contact::get_nickname() const
{
	return (this->nickname);
}

std::string Contact::get_phone_number() const
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (this->darkest_secret);
}