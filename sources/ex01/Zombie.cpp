#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_zombieName << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_zombieName << " is Double-Dead!!" << std::endl;
}

Zombie::Zombie(std::string zombieName)
{
	this->_zombieName = zombieName;
}

Zombie::Zombie(void)
{
	
};

void	Zombie::setZombieName(std::string zombieName)
{
	this->_zombieName = zombieName;
}