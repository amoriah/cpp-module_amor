/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:59:53 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 13:58:22 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//-------------конструкторы
ClapTrap::ClapTrap() : _name("NamelessTrap"),
						   _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &orig)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}

ClapTrap::ClapTrap(std::string const &name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor with name called " << std::endl;
	_name = name;
}
//-------------перегрузки
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
	return (*this);
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &trap)
{
	o << trap.getName();
	return (o);
}

//----------диструктор
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
//------------------методы
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
/*
пишем что собираемся аттаковать
проверяем, не умер ли тот кого аттакуем
еслм все норм то рандомно создаем число на которое хотим нанести урон,
пишем что нанечли урон на это бисло
записываем это рандомное число в(должны записать в перса которого аттакуем но почему то записываем в аттакующего)

*/
void ClapTrap::attack(std::string const &target)
{
	std::cout << _name << " the son of ClapTraps is going to attack... ";
	if (_hitPoints == 0)//вначале 10
	{
		std::cout << _name << " ... oh, no! He is already dead!!! He cannot attack any more!!!" << std::endl;
		return;
	}
	unsigned int new_damages = std::rand() % 10;//генерируем случайное число урона до 10
	std::cout << this->_name << " attacked " << target << ", causing " << new_damages << " points of damage!" << std::endl
			  << std::endl;
	_attackDamage += new_damages;//перезаписываем то сл число в урон аттаки
}

void ClapTrap::takeDamage(unsigned int amount)
{

	unsigned int hitpoints_before = _hitPoints;//очки здоровья
	if (amount == 0)
		std::cout << _name << ": HA-HA-HA! Seriously, screw you!!!" << std::endl;
	else if (_hitPoints == 0)
		std::cout << _name << " is already dead!!!" << std::endl;
	else if (amount >= hitpoints_before)
	{
		_hitPoints = 0;
		if (_energyPoints < 2)
			std::cout << _name << " died after hard fighting... " << std::endl
					  << "RIP " << std::endl
					  << _name << std::endl;
		else
		{
			std::cout << _name << "... He was almost dead... But, energy points filled his hit points for 10 points!" << std::endl
					  << "He is ready to fight again!" << std::endl  << std::endl;
			_hitPoints += 10;
			_energyPoints -= 2;
		}
	}
	else
	{
		_hitPoints -= amount;
		std::cout << _name << " was damaged! His hit points decreased from " << hitpoints_before << " to " << _hitPoints << "! :(" << std::endl
				  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Repairing process started ..." << std::endl;
	std::cout << "Hit points before : " << _hitPoints << std::endl;
	_hitPoints += amount;
	std::cout << "Hit points after : " << _hitPoints << "... Done!" << std::endl;
}
