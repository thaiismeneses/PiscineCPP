#include "Contact.hpp"


void Contact::SetContact(const std::string FirstName, const std::string LastName,
	const std::string Nickname, const std::string PhoneNumber, const std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}
