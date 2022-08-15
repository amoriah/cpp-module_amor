/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:07:42 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:07:44 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0 || N >= 2147483647)
	{
		std::cout << "Error: wrong number of zombies" << std::endl;
		return (NULL);
	}
	Zombie *horde;
	int		i;

	horde = new Zombie[N];
	i = -1;
	while (++i < N)
		horde[i].setName(name);
	return (horde);
}
