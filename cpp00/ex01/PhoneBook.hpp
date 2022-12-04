#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <sstream>

class PhoneBook
{
	public:
		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);
	private:
		Contact contact[8];
		int		len_max;
		int 	current;
};

#endif
