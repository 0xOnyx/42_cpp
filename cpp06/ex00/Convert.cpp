#include "Convert.hpp"

Convert::Convert() :str("") { };

Convert::~Convert() {};

Convert::Convert(std::string buff) :str(buff) {};

Convert::Convert(const Convert &convert)
{
	this->str = convert.str;
	this->type = convert.type;
}

Convert	&Convert::operator=(const Convert &convert)
{
	this->str = convert.str;
	this->type = convert.type;
}

void	Convert::detect_type()
{
	bool decimal;

	decimal = false;
	for (unsigned long i = 0; i < this->str.length(); i++)
	{
		if (this->str.at(i) == 'f' && i + 1 == this->str.length())
		{
			this->type = FLOAT;
			return;
		}
		else if (this->str.at(i) == '.')
		{
			if (!decimal)
				decimal = true;
			else
				throw std::exception();
		}
		else
			this->type = DOUBLE;
	}
	if (decimal)
		this->type = DOUBLE;
	else
		this->type = INT
}