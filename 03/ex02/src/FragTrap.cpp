/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:30:43 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 11:31:29 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		_hitPoints = 100;
		_energyPoints = 100;
		_attackDamage = 30;
	std::cout << ULINE <<"[**]Default constructor from FragTrap called"<< C_RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &orig) : ClapTrap(orig)
{
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	std::cout << ULINE <<"[**]Copy constructor from FragTrap called"<< C_RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << ULINE << "[**]Assignment operator overload from FragTrap called"<< C_RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << ULINE <<"[**]Destructor from FragTrap called"<< C_RESET << std::endl;
}

void	FragTrap::guardGate()
{
	std::cout << C_YELLOW << "[ GUARD_GATE]:      " << C_RESET;
	std::cout << "FragTrap is now in Gate keeper mode.\n";
}

void FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints)
	{
		std::cout << C_YELLOW << "[ FragTrap ATTACK ]: " << C_RESET;
		std::cout << this->_name << " the FragTrap's son attacks " << target;
		std::cout << ",causing " << this->getDamages() << " points of damage! ";
		this->_energyPoints -= 1;
		std::cout << this->_name << " has " << this->_energyPoints << " energyPoints left.\n";
	}
	else	{
		
		std::cout << C_RED << "[ FragTrap ATTACK ]: " << C_RESET;
		std::cout << this->_name << " lose energyPoints, hi/her cannot attack anymore." << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << C_GREEN << "[ HIGH_FIVES_GUYS ]: " << C_RESET << std::endl;;
	std::string str;
	std::cout << "✋:" << std::endl;
	std::cin >> str;
	if (str == "5")
		std::cout << "( ˘⌣˘)♡(˘⌣˘ )" << std::endl;
	else
		std::cout << "(╮°-°)╮┳━━┳ ( ╯°□°)╯ ┻━━┻" << std::endl;		
}
