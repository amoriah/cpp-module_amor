/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:12:42 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:12:44 by amoriah          ###   ########.fr       */
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
