/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfranco <thfranco@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:05:50 by thfranco          #+#    #+#             */
/*   Updated: 2024/12/28 20:05:51 by thfranco         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "PhoneBook.hpp"
#include <iostream>
#include <string>

std::string	ToUpperCase(std::string &str)
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
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		InputCommand = ToUpperCase(InputCommand);
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
