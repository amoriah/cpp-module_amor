/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:57:52 by yono              #+#    #+#             */
/*   Updated: 2022/08/01 18:58:48 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::~Weapon(void)
{
	std::cout << this->type << " was destroyed" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType()
{
	return(type);
}
