
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string Name;

	public:
		Zombie(const std::string name);
		~Zombie();
		std::string getName()
		{
			return Name;
		};
		void announce(void);
		static Zombie* newZombie(const std::string& name);
		static void randomChump(const std::string& name);
};

#endif
