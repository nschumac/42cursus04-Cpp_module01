#include "HumanA.hpp"

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanA::attack(void)
{
	std::cout<< this->_name << " attaks with his " << this->_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}