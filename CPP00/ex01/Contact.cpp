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
		str.resize(9);
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
}
