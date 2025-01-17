
#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl(){};

void Harl::debug(void)
{
	std::cout << "[DEBUG]:\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]:\n I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]: \n I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]:\n This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void (Harl::*HarlFunc)(void);
	HarlFunc functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "[INVALID ARGUMENT]:\n Invalid level" << std::endl;
}
