#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string _zombieName;
public:
	void	setZombieName(std::string zombieName);
	Zombie(void);
	Zombie(std::string zombieName);
	void	announce(void);
	~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif