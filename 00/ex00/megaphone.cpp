#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int			i;
	size_t		j;

	i = 0;
	j = -1;
	if (ac > 1)
	{
		while (++i < ac)
		{
			j = -1;
			while (++j < strlen(av[i]))
				std::cout << (char)toupper(av[i][j]);				
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}