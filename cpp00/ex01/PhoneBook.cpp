#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->len_max = 0;
	this->current = 0;
}

void	print_car_with_max(std::string str, size_t max)
{
	std::cout << "| ";
	if (str.length() >= max)
	{
		str[max - 1] = '.';
		str.resize(10);
	}
	str.resize(10, ' ');
	std::cout << str;
	std::cout << " ";
}

void	print_head()
{
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	print_car_with_max("index", 10);
	print_car_with_max("first_name", 10);
	print_car_with_max("last_name", 10);
	print_car_with_max("nickname", 10);
	std::cout << "|" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
}

std::string int_to_str(int i)
{
	std::ostringstream out_str;

	out_str << i;
	return (out_str.str());
}

int	get_id(int len_max)
{
	int	index;

	while(true)
	{
		std::cout << "set the index to search =>";
		if (std::cin >> index)
		{
			if (index > 0 && index <= len_max)
			{
				std::cin.ignore(255, '\n');
				return (index);
			}
			else
				std::cout << "[ERROR]\tthe index is outside the range" << std::endl;
		}
		else
		{
			std::cout << "[ERROR]\tis not un number" << std::endl;
			std::cin.clear();
			std::cin.ignore(255, '\n');
		}

	}
}

void	PhoneBook::search_contact()
{
	int 	index;
	Contact *current_contact;

	if (!this->len_max)
	{
		std::cout << "[INFO]\tcurrently empty contact" << std::endl;
		return ;
	}
	print_head();
	for (int i = 0; i < this->len_max; i++)
	{
		current_contact = &contact[i];
		print_car_with_max(int_to_str(i + 1), 10);
		print_car_with_max(current_contact->get_first_name(), 10);
		print_car_with_max(current_contact->get_last_name(), 10);
		print_car_with_max(current_contact->get_nickname(), 10);
		std::cout << "|" << std::endl;
	}
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	index = get_id(this->len_max);
	current_contact = &contact[index - 1];
	std::cout << "first_name\t=> " << current_contact->get_first_name() << std::endl;
	std::cout << "last_name\t=> " << current_contact->get_last_name() <<  std::endl;
	std::cout << "nickname\t=> " << current_contact->get_nickname() << std::endl;
	std::cout << "phone_number\t=> " << current_contact->get_phone_number() << std::endl;
	std::cout << "darkest_secret\t=> " << current_contact->get_darkest_secret() << std::endl;
}


void	get_value(const std::string prompt, Contact &contact)
{
	std::string buff;

	while (true)
	{
		std::cout << prompt << " $";
		std::getline(std::cin, buff);
		if (buff.length() == 0)
			std::cout << "[INFO]\tThe element is empty" << std::endl;
		if ((!prompt.compare("first_name") && !contact.set_first_name(buff))
			|| (!prompt.compare("last_name") && !contact.set_last_name(buff))
			|| (!prompt.compare("nickname") && !contact.set_nickname(buff))
			|| (!prompt.compare("phone_number") && !contact.set_phone_number(buff))
			|| (!prompt.compare("darkest_secret") && !contact.set_darkest_secret(buff)))
			std::cout << "[INFO]\tError Bad input" << std::endl;
		else
			break;
	}
}

void	PhoneBook::add_contact()
{
	this->len_max = this->len_max < 9 ? this->len_max + 1: this->len_max;
	get_value("first_name", this->contact[this->current]);
	get_value("last_name", this->contact[this->current]);
	get_value("nickname", this->contact[this->current]);
	get_value("phone_number", this->contact[this->current]);
	get_value("darkest_secret", this->contact[this->current]);
	std::cout << "[INFO]\tnew contact created with id => [" << this->current << "]" << std::endl;
	this->current = (this->current + 1) % 8;
}