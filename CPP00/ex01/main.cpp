
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

std::string	ttoUpperCase(std::string &str)
{
	std::string tmp = str;
	for (size_t i = 0; i < str.length(); i++)
		tmp[i] = toupper(str[i]);
	return (tmp);
}

int main()
{
	PhoneBook PhoneBook;
	std::string InputCommand;

	while (1)
	{
		PhoneBook.PrintMenu();
		std::getline(std::cin, InputCommand);
		InputCommand = ttoUpperCase(InputCommand);
		if (InputCommand == "ADD")
			PhoneBook.AddContact();
		else if (InputCommand == "SEARCH")
		{
			PhoneBook.SearchContact();
		}
		else if (InputCommand == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;

	}

}
