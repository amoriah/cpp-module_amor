/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:07:36 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:07:38 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	Zombie::getName() const
{
	return(this->name);
}

void	Zombie::announce() const
{
	std::cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}