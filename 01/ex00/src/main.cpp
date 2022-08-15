/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:50:46 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:05:20 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("lol");
	Zombie *zom1 = newZombie("Wow");
	zom1->announce();
	delete zom1;
	zom1 = NULL;
}

