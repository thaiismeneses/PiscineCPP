
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Type = type;
}

Weapon::~Weapon(){};

void Weapon::setType(std::string type)
{
	Type = type;
}

std::string Weapon::getType()
{
	return (Type);
}
