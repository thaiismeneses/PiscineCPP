#include <iostream>
#include <string>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory Address of the string: " << &str << std::endl;
	std::cout << "Memoty Address of stringPTR: " << stringPTR <<std::endl;
	std::cout << "Memory Address of string REF: " << &stringREF << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "String: " << str << std::endl;
	std::cout << "StringPTR: " << *stringPTR <<std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	return (0);

}
