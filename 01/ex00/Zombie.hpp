#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

using std::string;
using std::endl;
using std::cout;
using std::cin;

class	Zombie 
{
private:
	string name;

public:
	Zombie();
	Zombie(string name);
	~Zombie();
	string	getName() const;
	void	announce(void) const;

};

Zombie	*newZombie(string name);
void	randomChump(string name);
Zombie *zombieHorde(int N, string name);

#endif 