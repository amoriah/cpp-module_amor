/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:05:30 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 15:05:31 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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