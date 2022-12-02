#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);
	private:
		Contact contact[8];
		int		len_max;
};

#endif
