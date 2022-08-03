/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:55:02 by yono              #+#    #+#             */
/*   Updated: 2022/08/02 18:04:36 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main()
{	
	int	N;

	N = 1;
	Zombie *horde;
	horde = zombieHorde(N, "name");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	horde = NULL;
	return (0);
}
