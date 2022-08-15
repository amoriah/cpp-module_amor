/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:07:30 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:08:38 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main()
{	
	int	N;

	N = 10;
	Zombie *horde;
	horde = zombieHorde(N, "ROB");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	horde = NULL;
	return (0);
}
