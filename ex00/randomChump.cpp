// ADD 42 HEADER

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie MyRandomZombie(name);

	MyRandomZombie.announce();
}