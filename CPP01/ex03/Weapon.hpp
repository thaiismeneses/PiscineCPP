
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string Type;

	public:
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string type);
};

#endif
