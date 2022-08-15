/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:51:19 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:05:33 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::getName() const
{
	return (this->name);
}

void	Zombie::announce(void) const
{
	std::cout << getName() << ": " << "BraiiiiiiiiiiinnnnzzzZ..." << std::endl;
}