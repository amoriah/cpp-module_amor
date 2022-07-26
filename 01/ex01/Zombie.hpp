#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie
{
private:
	string name;
public:
	Zombie();
	~Zombie();
	Zombie(string name);
	string	getName() const;
	void	announce() const;
};

Zombie	*newZombie(string name);
// void	randomChump(string name);

#endif