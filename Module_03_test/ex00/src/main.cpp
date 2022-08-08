/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:59:49 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 15:23:37 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	startGame(ClapTrap Gentle, ClapTrap Toxic)
{
	std::cout << C_MAGENTA << "GAME_STARTED:     " << std::setw(5) << C_RESET << std::endl;
	int	first;
	
	srand(time(0));
	first = std::rand() % 2;
	if (first)
		Gentle.attack(Toxic.getName());
	else
		Toxic.attack(Gentle.getName());	
}

void	ClapTrap::printStatus() const
{
	
	std::cout << C_MAGENTA << "GAME_CHARACTER:     " << std::setw(5) << C_RESET << std::endl;
	std::cout << C_BLUE << "Name: " << C_RESET << this->getName() << std::endl;
	std::cout << C_GREEN << "hitPoints: " << C_RESET << this->getHitPoints() << std::endl;
	std::cout << C_YELLOW << "energyPoints: " << C_RESET << this->getEnergyPoints() << std::endl;
	std::cout << C_RED << "attackDamage: " << C_RESET << this->getDamages() << std::endl;
}

int main(void)
{
	std::cout << B_CYAN << "*********_THE_CLAPTRAP_HAS_BEGUN_*********" << C_RESET << std::endl;
	std::cout << std::endl;

	ClapTrap Gentle("Gentle😇");
	ClapTrap Toxic("Toxic😈");
	Gentle.printStatus();
	Toxic.printStatus();
	do {
		startGame(Gentle, Toxic);
	} while (Gentle.getHitPoints() != 0 || Toxic.getHitPoints() != 0);
	std::cout << std::endl;
	std::cout << B_CYAN << "***************_GAME_OVER_***************" << C_RESET << std::endl;

	
}