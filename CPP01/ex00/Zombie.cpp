
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Name = name;
};

Zombie::~Zombie()
{
	std::cout << Name << " is dead" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};



