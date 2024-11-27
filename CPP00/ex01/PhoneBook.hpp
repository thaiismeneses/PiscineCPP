#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include "Contact.hpp"


class PhoneBook
{
	public:
		PhoneBook();
		void PrintMenu();
		void AddContact();
		void SearchContact();

	private:
		Contact Contacts[8];
		int CurrentIndex;
		int TotalContacts;


};

#endif
