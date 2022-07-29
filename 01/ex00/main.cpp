#include "Zombie.hpp"

int	main(void)
{
	Zombie zom("lol");
	zom.announce();
	Zombie *zom1 = newZombie("Wow");
	zom1->announce();
	delete zom1;
}

