#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <exception>

enum	e_type
{
	UNDETERMINED,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

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
	void print_char();
	void print_int();
	void print_float();
	std::string str;
	e_type		type;
};

#endif