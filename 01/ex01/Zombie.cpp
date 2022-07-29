#include "ZombieHorde.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::Zombie()
{
	std::cout << getName() << " come back to live!" << std::endl;
}

std::string	Zombie::getName() const
{
	return(this->name);
}

void	Zombie::announce() const
{
	std::cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << getName() << " is really dead" << std::endl;
}

Zombie *newZombie(std::string name)
{
	return(new Zombie(name));
}
