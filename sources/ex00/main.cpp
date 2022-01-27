#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		argv[1] = argv[1];
		std::cout << "Dont do that !" << std::endl;
		return (1);
	}
	Zombie *zomb1 = newZombie("Steve");
	zomb1->announce();
	for (int c = 0; c < 10; c++)
		randomChump(std::to_string(c));
	delete (zomb1);
	return 0;
}