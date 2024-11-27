
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	CurrentIndex = 0;
	TotalContacts = 0;
}

void PhoneBook::PrintMenu()
{
	std::cout << "Welcome to the 80s and their unbelievable technology!" << std::endl;
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

	std::cout << "Let's create a new contact" << std::endl;

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

	if (TotalContacts < 8)
		TotalContacts++;

}

void PhoneBook::SearchContact()
{
	std::cout << "Searching for a contact..." << std::endl;

	if (TotalContacts == 0)
	{
		std::cout << "No contacts to search for, sorry!" << std::endl;
		return;

	}

	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|"
				<< std::setw(10) << "Phone Number" << "|"
				<< std::setw(10) << "Darkest Secret" << std::endl;

}
