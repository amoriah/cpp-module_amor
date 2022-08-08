/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:59:49 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 19:29:33 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
// int	retRandom(int range)
// {
// 	int	rand;
// 	srand(time(0));
	
// 	rand = std::rand() % range;
// 	return(rand);
// }

void	startGame(ClapTrap Gentle, std::string enemy)
{
	Gentle.printStatus();
	std::cout << std::endl;
	std::cout << B_MAGENTA << "**************_GAME_STARTED_***************" << C_RESET << std::endl;
	Gentle.attack(enemy);
	Gentle.takeDamage(5);
	if (!Gentle.getHitPoints())
		return;
	Gentle.beRepaired(21);
}

void	ClapTrap::printStatus() const
{	
	std::cout << B_CYAN << "*********_THE_CLAPTRAP_HAS_BEGUN_*********" << C_RESET << std::endl;
	std::cout << std::endl;
	std::cout << C_MAGENTA << "GAME_CHARACTERS:     " << std::setw(5) << C_RESET << std::endl;
	std::cout << C_BLUE << "Name: " << C_RESET << this->getName() << std::endl;
	std::cout << C_GREEN << "hitPoints: " << C_RESET << this->getHitPoints() << std::endl;
	std::cout << C_YELLOW << "energyPoints: " << C_RESET << this->getEnergyPoints() << std::endl;
	std::cout << C_RED << "attackDamage: " << C_RESET << this->getDamages() << std::endl;
}

int main(void)
{
	ClapTrap Gentle("Gentle😇");
	ScavTrap Robot("Busya");
	startGame(Gentle, "Toxic😈");
	std::cout << std::endl;
	std::cout << B_CYAN << "***************_GAME_OVER_***************" << C_RESET << std::endl;	
}