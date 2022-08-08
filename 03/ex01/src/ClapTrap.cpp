/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:59:53 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 18:24:57 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//-------------ctors----------------------------------------------------------
ClapTrap::ClapTrap() : 
		_name("NamelessTrap"),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << ULINE <<"Default constructor called"<< C_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) :
		 _hitPoints(10),
		 _energyPoints(10),
		 _attackDamage(0) {
	std::cout << ULINE << "Constructor with name called " << C_RESET << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &orig)
{
	std::cout << ULINE << "Copy constructor called" << C_RESET << std::endl;
	*this = orig;
}
//--------------dtor----------------------------------------------------------
ClapTrap::~ClapTrap()
{
	std::cout << ULINE << "Destructor called" << C_RESET << std::endl;
}
//-------------overloads------------------------------------------------------
ClapTrap &ClapTrap::operator=(ClapTrap const &dst)
{
	std::cout << ULINE << "Assignment operator overload called" << C_RESET << std::endl;
	if (this != &dst)
	{
		this->_name = dst._name;
		this->_hitPoints = dst._hitPoints;
		this->_energyPoints = dst._energyPoints;
		this->_attackDamage = dst._attackDamage;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &trap)
{
	out << trap.getName();
	return (out);
}
//--------------methods-------------------------------------------------------
std::string ClapTrap::getName() const
{
	return (this->_name);
}

void ClapTrap::setName(std::string name)
{
	_name = name;
	std::cout << "setName.New ClapTrap name is " << name << std::endl;
}

unsigned int ClapTrap::getDamages() const
{
	return (_attackDamage);
}

int	ClapTrap::getHitPoints() const
{
	return(_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return(_energyPoints);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints)
	{
		std::cout << this->_name << " attacks " << target;
		std::cout << ",causing " << this->getDamages() << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		std::cout << this->_name << " has " << this->_energyPoints << " energyPoints left\n";
	}
	else
		std::cout << this->_name << " lose energyPoints, hi/her cannot attack anymore" << std::endl;
	// int	damage;
	// damage = retRandom(10);
	// this->takeDamage(this->getDamages());
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (amount == 10 || this->_hitPoints <= 0)
	{
		std::cout << "Target killed!!!" << std::endl;
		return;
	}
	std::cout << "Target lost " << amount << " hitPoints! ";
	std::cout << this->getHitPoints() << " hitPoints left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;		
		std::cout << this->_name << " was repaired by " << amount << " points\n";
		std::cout << this->_name << " has " << this->_energyPoints << " energyPoints left\n";
	}
	else
		std::cout << this->_name << " lose energyPoints, hi/her cannot reparied anymore" << std::endl;		
}
