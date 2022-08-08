#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void ft_simulation1(ClapTrap &t1, FragTrap &t2)
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
	// 	FragTrap t2;
	// }
	srand(time(NULL)); // for rand()

	ClapTrap t1("SuperTrap");
	FragTrap t2;
	t2.setName("Frag-Frag-Trap");

	ft_simulation1(t1, t2);
	t2.highFivesGuys();

	return (0);
}