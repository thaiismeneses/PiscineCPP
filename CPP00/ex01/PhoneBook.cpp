
#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook()
{
	CurrentIndex = 0;
	TotalContacts = 0;
}

void PhoneBook::PrintMenu()
{
	std::cout<< std::endl << "Welcome to the 80s and their unbelievable technology!" << std::endl;
	std::cout << std::endl;
	std::cout << "------------ MENU ------------" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD - Add a new contact" << std::endl;
	std::cout << "SEARCH - Search for a contact" << std::endl;
	std::cout << "EXIT - Exit the program" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
}

void PhoneBook::AddContact()
{
	Contact Contact;
	std::string FirstName, LastName, Nickname, PhoneNumber, DarkestSecret;

	std::cout << std::endl << "Let's create a new contact" << std::endl;

	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, FirstName);

	std::cout << "LastName:" << std::endl;
	std::getline(std::cin, LastName);

	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, Nickname);

	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, PhoneNumber);

	std::cout << "Darkest Secret" << std::endl;
	std::getline(std::cin, DarkestSecret);

	Contacts[CurrentIndex].SetContact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
	CurrentIndex++;

	CurrentIndex = (CurrentIndex) % 8;
	if (TotalContacts < 8)
		TotalContacts++;
}

void PhoneBook::SearchContact()
{
	int SearchIndex;
	std::cout << std::endl << "Searching for a contact..." << std::endl;

	if (TotalContacts == 0)
	{
		std::cout << std::endl << "No contacts to search for, sorry!" << std::endl;
		return;
	}
	std::cout << std::string(44, '-') << std::endl;
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|"<< std::endl;
	std::cout << std::string(44, '-') << std::endl;

	for (int i = 0; i < TotalContacts; i++)
		Contacts[i].PrintContact(i);

	std::cout << "Select an index for more details: " << std::endl;
	
	while (!(std::cin >> SearchIndex) || SearchIndex < 0 || SearchIndex >= TotalContacts)
	{
		std::cin.clear();
		std::cin.ignore(2147483647, '\n');
		std::cout << std::endl << "Contact Selected Not Found" << std::endl;
		std::cout << "Please enter a valid index!" << std::endl;
	}
	std::cin.ignore(2147483647, '\n');
	Contacts[SearchIndex].PrintDetails(SearchIndex);
}
