#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
}

string Zombie::getName() const
{
	return (this->name);
}

void	Zombie::announce(void) const
{
	cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << endl;
}