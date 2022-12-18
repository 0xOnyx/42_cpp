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
	return (*this);
}

void 	Convert::print_char(std::string buff)
{
	char c;

	c = buff.at(0);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Convert::print_int(std::string buff)
{
	std::istringstream	ss(buff);
	int					a;

	ss >> a;
	if (ss.fail()
		|| a > std::numeric_limits<int>::max()
		|| a < std::numeric_limits<int>::min())
		throw std::exception();
	if (isprint(static_cast<char>(a)) == 1)
		std::cout << "char: " << static_cast<char>(a) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << a << std::endl;
	std::cout << "float: " << static_cast<float>(a) << std::setprecision(2) << std::endl;
	std::cout << "double: " << static_cast<double>(a) << std::endl;
}

void Convert::print_float(std::string buff)
{
	buff.erase(buff.length() - 1);
	std::istringstream 	ss(buff);
	float 				a;

	buff.push_back('f');
	if (!buff.compare("-inff") || !buff.compare("+inff") || !buff.compare("nanf"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << buff << std::endl;
		buff.erase(buff.length() - 1);
		std::cout << "double: " << buff << std::endl;
		return ;
	}
	ss >> a;
	if (ss.fail()
		|| a > std::numeric_limits<float>::max()
		|| a < std::numeric_limits<float>::min())
		throw std::exception();
	else
	{
		if (isprint(static_cast<float>(a)) == 1)
			std::cout << "char: " << static_cast<char>(a) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(a) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << a << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(a) << std::endl;
	}
}

void Convert::print_double(std::string buff)
{
	std::istringstream 	ss(buff);
	double				a;

	if (!buff.compare("-inf") || !buff.compare("+inf") || !buff.compare("nan"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		buff.push_back('f');
		std::cout << "float: " << buff <<std::endl;
		buff.erase(buff.length() - 1);
		std::cout << "double: " << buff << std::endl;
		return ;
	}
	ss >> a;
	if (ss.fail()
		|| a > std::numeric_limits<double>::max()
		|| a < std::numeric_limits<double>::min())
		throw std::exception();
	else
	{
		if (isprint(static_cast<float>(a)) == 1)
			std::cout << "char: " << static_cast<char>(a) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(a) << std::endl;
		std::cout << "float: " << a << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(a) << std::endl;
	}
}

void	Convert::print_element()
{
	t_func func[5] = {
			NULL,
			&Convert::print_char,
			&Convert::print_int,
			&Convert::print_float,
			&Convert::print_double
	};
	func[this->type](this->str);
}

void	Convert::detect_type()
{
	unsigned int	i;
	bool	 		decimal;

	i = 0;
	decimal = false;
	if (str.at(0) == '\'' && isascii(str.at(1) && str.at(2) == '\''))
	{
		this->type = CHAR;
		return ;
	}
	else if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
	{
		this->type = FLOAT;
		return ;
	}
	else if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
	{
		this->type = DOUBLE;
		return ;
	}
	else if (str.compare("-inf"))
	if (str.at(i) != '-' || str.at(i) != '+')
		i++;
	for (; i < this->str.length(); i++)
	{
		if (str.at(i) == 'f')
		{
			this->type = FLOAT;
			return ;
		}
		else if (str.at(i) == '.')
		{
			if (!decimal)
				decimal = true;
			else
				throw std::exception();
		}
		else if (!isdigit(str.at(i)))
			throw std::exception();
	}
	if (decimal)
		this->type = DOUBLE;
	else
		this->type = INT;
}
