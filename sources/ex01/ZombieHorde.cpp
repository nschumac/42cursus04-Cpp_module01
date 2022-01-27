#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *retZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		retZombie[i].setZombieName(name);
	return (retZombie);
}