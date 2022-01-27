#include "Zombie.hpp"

int main(void)
{
	int N = 20;

	Zombie *zombs = zombieHorde(N, "Steve");
	for (int i = 0; i < N; i++)
		zombs->announce();
	delete[] zombs;
}