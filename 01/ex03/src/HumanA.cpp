/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:12:09 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:12:11 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)//список инициализации членов класса
{
	this->name = name;
}

HumanA::~HumanA()
{
	std::cout << "† " << this->name << " was died" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " is attacking with " << this->weapon.getType() << std::endl;
}
