
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

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
	Contact contact;

	std::cout << "First Name: " << std::endl;


}
