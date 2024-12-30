/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfranco <thfranco@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:05:42 by thfranco          #+#    #+#             */
/*   Updated: 2024/12/28 20:05:43 by thfranco         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Contact.hpp"

void Contact::SetContact(const std::string FirstName, const std::string LastName,
						const std::string Nickname, const std::string PhoneNumber,
						const std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

std::string ResizeString(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0,9);
		str += ".";
	}
	return (str);
}

void Contact::PrintContact(int index) const
{
	std::cout << std::setw(10) <<  index << "|" <<
				std::setw(10) << ResizeString(FirstName) << "|" <<
				std::setw(10) << ResizeString(LastName) << "|" <<
				std::setw(10) << ResizeString(Nickname) << "|" << std::endl;
	std::cout << std::string(44, '-') << std::endl;
}

void Contact::PrintDetails(int index) const
{
	std::cout << "Index: " << index << std::endl;
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Dark Secret: " << DarkestSecret << std::endl;
}
