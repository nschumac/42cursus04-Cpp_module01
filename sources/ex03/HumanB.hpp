#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	void	setWeapon(Weapon &weapon);
	void	attack(void);
	HumanB(std::string name);
};

#endif