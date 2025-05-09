// 42 HEADER HERE!

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* MyHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		MyHorde[i].setName(name);
	 return (MyHorde);
}