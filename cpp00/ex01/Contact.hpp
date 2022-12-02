#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	public:
		bool set_first_name(const std::string str);
		bool set_last_name(const std::string str);
		bool set_nickname(const std::string str);
		bool set_phone_number(const std::string str);
		bool set_darkest_secret(const std::string str);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
