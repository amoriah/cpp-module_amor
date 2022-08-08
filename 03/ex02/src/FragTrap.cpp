/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:30:43 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 20:42:38 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		_hitPoints = 100;
		_energyPoints = 100;
		_attackDamage = 30;
	std::cout << ULINE <<"Default ctor from FragTrap called"<< C_RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &orig) : ClapTrap(orig)
{
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	std::cout << ULINE <<"Copy ctor from FragTrap called"<< C_RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << ULINE << "Assignment operator overload from FragTrap called"<< C_RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << ULINE <<"dtor from FragTrap called"<< C_RESET << std::endl;
}

void	FragTrap::guardGate()
{
	std::cout << "FragTrap is now in Gate keeper mode\n";
}

void FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints)
	{
		std::cout << this->_name << " the FragTrap's son attacks " << target;
		std::cout << ",causing " << this->getDamages() << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		std::cout << this->_name << " has " << this->_energyPoints << " energyPoints left\n";
	}
	else
		std::cout << this->_name << " lose energyPoints, hi/her cannot attack anymore" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::string str;
	std::cout << "✋:" << std::endl;
	std::cin >> str;
	if (str == "5")
		std::cout << "( ˘⌣˘)♡(˘⌣˘ )" << std::endl;
	else
		std::cout << "(╮°-°)╮┳━━┳ ( ╯°□°)╯ ┻━━┻" << std::endl;		
}