/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:57:51 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 12:24:31 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>
# include <time.h>

//ClapTrap - "ловушка для хлопушек???"
class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;//Очки попадания (10), отражают здоровье ClapTrap
	unsigned int _energyPoints;//Очки энергии (10)
	unsigned int _attackDamage;//Урон от атаки (0)

public:
	ClapTrap();
	ClapTrap(ClapTrap const &orig);
	ClapTrap(std::string const &name);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &dst);

	std::string getName() const;
	void setName(std::string name);
	unsigned int getDamages() const;

	void attack(std::string const &target);//Когда ClapTrack атакует, он заставляет свою цель терять <attack damage> хит-пойнтов.
	void takeDamage(unsigned int amount);//наносить повреждения
	void beRepaired(unsigned int amount);//Когда Хлопушка ремонтирует себя, она получает <сумма> хит-поинтов обратно. Атака и ремонт стоят по 1 очку энергии. 
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &trap);

#endif
