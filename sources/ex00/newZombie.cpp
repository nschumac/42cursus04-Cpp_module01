#include "Zombie.hpp"

// Call [delete {zombie}] after use of function
Zombie* newZombie( std::string name )
{
	Zombie *retZombie = new Zombie(name);
	return (retZombie);
}