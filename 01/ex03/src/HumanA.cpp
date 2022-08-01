/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:57:48 by yono              #+#    #+#             */
/*   Updated: 2022/08/01 19:20:24 by yono             ###   ########.fr       */
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
