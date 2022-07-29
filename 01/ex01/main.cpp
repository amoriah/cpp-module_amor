#include "ZombieHorde.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde;
	(void)name;
	horde = new Zombie[N];
	// int	i;

	// i = -1;
	// while (++i < N)
	return (horde);
}

int	main()
{
	Zombie zom("Tommy");
	zom.announce();

	Zombie *zom2 = newZombie("Nick");
	zom2->announce();
	delete zom2;
	Zombie *horde;
	horde = zombieHorde(10, "man");
	std::cout << horde[0].name << std::endl;

}


/*Пора создать орду зомби!
Реализуйте следующую функцию в соответствующем файле:
Zombie* zombieHorde( int N, std::string name );
Она должна выделить N объектов Зомби за одно распределение. Затем она должна инициализировать
зомби, присвоив каждому из них имя, переданное в качестве параметра. Функция возвращает
указатель на первого зомби.

Проведите собственные тесты, чтобы убедиться, что ваша функция zombieHorde() работает так, как ожидается.
Попробуйте вызвать функцию announce() для каждого из зомби.

Не забудьте удалить всех зомби и проверить на утечку памяти. */