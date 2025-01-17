
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

void Harl::filter(std::string level)
{

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void (Harl::*HarlFunc)(void);
	HarlFunc functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int levelIndex = -1;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			levelIndex = i;
			break;
		}
	}

	switch (levelIndex)
	{
		case 0:
			(this->*functions[0])();
			//Fall-through
		case 1:
			(this->*functions[1])();
			//Fall-through
		case 2:
			(this->*functions[2])();
			//Fall-through
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
