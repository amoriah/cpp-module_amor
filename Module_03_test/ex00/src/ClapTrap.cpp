/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:59:53 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 15:21:58 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//-------------ctors----------------------------------------------------------
ClapTrap::ClapTrap() : 
		_name("NamelessTrap"),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	// std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) :
		 _hitPoints(10),
		 _energyPoints(10),
		 _attackDamage(0) {
	// std::cout << "Constructor with name called " << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &orig)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}
//--------------dtor----------------------------------------------------------
ClapTrap::~ClapTrap()
{
	// std::cout << "Destructor called" << std::endl;
}
//-------------overloads------------------------------------------------------
ClapTrap &ClapTrap::operator=(ClapTrap const &dst)
{
	std::cout << "Assignment operator overload called" << std::endl;
	if (this != &dst)
	{
		this->_name = dst._name;
		this->_hitPoints = dst._hitPoints;
		this->_energyPoints = dst._energyPoints;
		this->_attackDamage = dst._attackDamage;
	}
	return (*this);//!!!!!!!!!!!! почему вышло по указателю?????
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
/*
пишем что собираемся аттаковать
проверяем, не умер ли тот кого аттакуем
еслм все норм то рандомно создаем число на которое хотим нанести урон,
пишем что нанечли урон на это бисло
записываем это рандомное число в(должны записать в перса которого аттакуем но почему то записываем в аттакующего)

*/
// void ClapTrap::attack(std::string const &target)
// {
		Когда ClapTrack атакует, он заставляет свою цель терять 
<attack damage> хит-пойнтов.
// }

// void ClapTrap::takeDamage(unsigned int amount)
// {

// }

// void ClapTrap::beRepaired(unsigned int amount)
// {

// }
