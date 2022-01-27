#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	std::cout<< this->_name << " attaks with his " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}