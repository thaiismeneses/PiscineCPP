
#include "Zombie.hpp"

void Zombie::randomChump(const std::string& name) {
	Zombie zombie(name);
	zombie.announce();
};
