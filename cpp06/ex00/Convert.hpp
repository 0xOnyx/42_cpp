#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <iostream>
# include <sstream>
# include <exception>
# include <limits>
# include <iomanip>

enum	e_type
{
	UNDETERMINED,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

typedef void (*t_func)(std::string);

class Convert
{
public:
	Convert();
	~Convert();
	Convert(std::string buff);
	Convert(const Convert &convert);
	Convert &operator=(const Convert &convert);
	void detect_type();
	void print_element();

private:
	static void	print_char(std::string buff);
	static void	print_int(std::string buff);
	static void	print_float(std::string buff);
	static void	print_double(std::string buff);
	std::string str;
	e_type		type;
};

#endif