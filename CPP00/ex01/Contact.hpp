# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	public:
		void SetContact( const std::string FirstName, const std::string LastName,
			const std::string Nickname, const std::string PhoneNumber, const std::string DarkestSecret);
		void PrintContact(int index)const;

	private:
		std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif
