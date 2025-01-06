
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie  = Zombie("Zombie");
	zombie.announce();

	Zombie *zombie2 = Zombie::newZombie("Zombie2");
	zombie2->announce();

	Zombie::randomChump("Zombie3");

	delete zombie2;
}
