/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:55:18 by yono              #+#    #+#             */
/*   Updated: 2022/07/29 18:55:19 by yono             ###   ########.fr       */
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
