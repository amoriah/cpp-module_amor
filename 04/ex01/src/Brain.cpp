/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:39:23 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 20:22:47 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default constructor from Brain called.\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Brain_";
}

Brain::Brain(Brain const &src){
	std::cout << "Copy Constructor from Brain called.\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain::~Brain(){
	std::cout << "Destructor from Brain called.\n";
}

Brain	&Brain::operator=(Brain const &dst)
{
	std::cout << "Assignation constructor overload from Brain called\n";
	if (this != &dst)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = dst._ideas[i];
	}
	return (*this);
}

void	Brain::printIdeas() const
{
	for(int i = 0; i < 100; i++)
		std::cout << _ideas[i] << i << std::endl;
}
