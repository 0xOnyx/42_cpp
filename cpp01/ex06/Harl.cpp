#include "Harl.hpp"

Harl::Harl()
{
	this->name[0]	= "debug";
	this->f[0]		= &Harl::debug;
	this->name[1]	= "info";
	this->f[1]		= &Harl::info;
	this->name[2]	= "warning";
	this->f[2]		= &Harl::warning;
	this->name[3]	= "error";
	this->f[3] 		= &Harl::error;
}

Harl::~Harl()
{
	std::cout << "\tHarl as ben destroy" << std::endl;
}

void Harl::complain(std::string level)
{
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (!this->name[i].compare(level))
		{
			break;
		}

	}
	if (i >= 4)
	{
		std::cout << "no found bro" <<  std::endl;
		return ;
	}
	for (; i < 4; i++)
		(this->*(f[i]))();
}

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been comingfor years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}