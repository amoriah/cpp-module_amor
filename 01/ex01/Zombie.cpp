#include "ZombieHorde.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
}
Zombie::Zombie()
{
	cout << getName() << " come back to live!" << endl;
}

string	Zombie::getName() const
{
	return(this->name);
}

void	Zombie::announce() const
{
	cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << endl;
}

Zombie::~Zombie()
{
	cout << getName() << " is really dead" << endl;
}

Zombie *newZombie(string name)
{
	return(new Zombie(name));
}
