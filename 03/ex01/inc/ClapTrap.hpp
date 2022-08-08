/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:57:51 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 16:23:16 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
#include <iomanip>
# include <cstdlib>
# include <cmath>
# include <time.h>

//---colors----------
# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

# define ULINE   "\033[21m"

# define B_BLACK   "\e[30;40m"
# define B_RED     "\e[30;41m"
# define B_GREEN   "\e[30;42m"
# define B_YELLOW  "\e[30;43m"
# define B_BLUE    "\e[30;44m"
# define B_MAGENTA "\e[30;45m"
# define B_CYAN    "\e[30;46m"


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
	~ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &orig);
	ClapTrap &operator=(ClapTrap const &dst);

	void			setName(std::string name);
	void			printStatus() const;
	unsigned int	getDamages() const;
	std::string		getName() const;
	int				getHitPoints() const;
	int				getEnergyPoints() const;

	void attack(std::string const &target);//Когда ClapTrack атакует, он заставляет свою цель терять <attack damage> хит-пойнтов.
	void takeDamage(unsigned int amount);//наносить повреждения
	void beRepaired(unsigned int amount);//Когда Хлопушка ремонтирует себя, она получает <сумма> хит-поинтов обратно. Атака и ремонт стоят по 1 очку энергии. 
};

int	retRandom(int range);
std::ostream &operator<<(std::ostream &out, ClapTrap const &trap);


#endif
