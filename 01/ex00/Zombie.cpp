#include "Zombie.hpp"

std::string Zombie::getName() const
{
	return (this->name);
}

void	Zombie::announce(void) const
{
	std::cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << std::endl;
}