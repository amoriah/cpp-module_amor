/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:30:43 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 11:31:09 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		_hitPoints = 100;
		_energyPoints = 50;
		_attackDamage = 20;
	std::cout << ULINE <<"[**]Default constructor from ScavTrap called"<< C_RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &orig) : ClapTrap(orig)
{
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	std::cout << ULINE <<"[**]Copy constructor from ScavTrap called"<< C_RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << ULINE << "[**]Assignment operator overload from ScavTrap called"<< C_RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << ULINE <<"[**]Destructor from ScavTrap called"<< C_RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << C_MAGENTA << "[ GUARD_GATE ]:      " << C_RESET;
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints)
	{
		std::cout << C_YELLOW << "[ ScavTrap ATTACK ]: " << C_RESET;
		std::cout << this->_name << " the ScavTrap's son attacks " << target;
		std::cout << ",causing " << this->getDamages() << " points of damage! ";
		this->_energyPoints -= 1;
		std::cout << this->_name << " has " << this->_energyPoints << " energyPoints left.\n";
	}
	else
	{
		std::cout << C_RED << "[ ScavTrap ATTACK ]: " << C_RESET;
		std::cout << this->_name << " lose energyPoints, hi/her cannot attack anymore." << std::endl;
	}
}
