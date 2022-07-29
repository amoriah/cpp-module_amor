#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	std::string	getName() const;
	void	announce() const;
};

Zombie	*newZombie(std::string name);
// void	randomChump(string name);

#endif