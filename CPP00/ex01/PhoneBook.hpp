#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>


class PhoneBook
{
	public:
		void PrintMenu();
		void AddContact();
		PhoneBook();
		~PhoneBook();
	private:
		int size[8];

	PhoneBook()
	{

	}
	~PhoneBook()
	{
		delete[] size;
	}
};

#endif
