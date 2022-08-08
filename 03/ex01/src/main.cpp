#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void ft_simulation1(ClapTrap &t1, ScavTrap &t2)
{

	unsigned int damage_before;
	unsigned int new_damage;
	int reapair;
	srand(time(NULL));

	std::cout << std::endl;

	damage_before = t1.getDamages();
	t1.attack(t2.getName());
	new_damage = t1.getDamages() - damage_before;
	t2.takeDamage(new_damage);

	reapair = std::rand() % 4;
	if (t1.getDamages() > damage_before && reapair != 0)
		t2.beRepaired(reapair);
	else if (t1.getDamages() > damage_before)
		std::cout << "Sorry, refuse to repair him :^(" << std::endl;
	std::cout << std::endl;
}

void ft_simulation2(ScavTrap &t1, ClapTrap &t2)
{
	unsigned int damage_before;
	unsigned int new_damage;
	int reapair;
	srand(time(NULL));

	std::cout << std::endl;

	damage_before = t1.getDamages();
	t1.attack(t2.getName());
	new_damage = t1.getDamages() - damage_before;
	t2.takeDamage(new_damage);

	reapair = std::rand() % 4;
	if (t1.getDamages() > damage_before && reapair != 0)
		t2.beRepaired(reapair);
	else if (t1.getDamages() > damage_before)
		std::cout << "Sorry, refuse to repair him :^(" << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	// {
	// 	ScavTrap t2;
	// }
	srand(time(NULL)); // for rand()

	ClapTrap t1("SuperTrap");
	ScavTrap t2;
	t2.setName("OrangeTrap");

	ft_simulation1(t1, t2);
	ft_simulation2(t2, t1);
	t2.guardGate();

	return (0);
}