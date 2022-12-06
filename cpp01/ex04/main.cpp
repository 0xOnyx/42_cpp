#include <iostream>
#include <fstream>
#include <string.h>


int open_in_file(char *file_name, std::ifstream &ifs)
{
	ifs.open(file_name);
	if (ifs.fail())
	{
		std::cerr << "[ERROR]\terror to open file => " << strerror(errno) << std::endl;
		return (1);
	}
	return (0);
}

int open_out_file(char *file_name, std::ofstream &ofs)
{
	std::string file_out;

	file_out = file_name;
	file_out += ".replace";
	ofs.open(file_out.c_str());
	if (ofs.fail())
	{
		std::cerr << "[ERROR]\terror to open file => " << strerror(errno) << std::endl;
		return (1);
	}
	return (0);
}

void	ft_replace(std::string &buff, std::string befor_str, std::string after_str)
{
	std::size_t pos;

	while ((pos = buff.find(befor_str)) != std::string::npos)
	{
		buff.erase(pos, befor_str.size());
		buff.insert(pos, after_str);
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string 	befor_str;
	std::string 	after_str;
	std::string		buff;

	if (argc != 4 || open_in_file(argv[1], ifs) || open_out_file(argv[1], ofs))
		return (1);
	befor_str = argv[2];
	after_str = argv[3];
	while (std::getline(ifs, buff))
	{
		ft_replace(buff, befor_str, after_str);
		ofs << buff << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}