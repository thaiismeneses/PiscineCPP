#include "Zombie.hpp"

Zombie::Zombie() : Name("notDefined"){};
Zombie::~Zombie()
{
	std::cout << Name << " is dead" << std::endl;
};

void Zombie::setName(std::string name)
{
	Name = name;
};
void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};


