/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:56:26 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 18:01:53 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Dog::Dog(){
	type = "Dog🐶";
	std::cout << "Default constructor from Dog called.\n";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	*this = src;
	std::cout << "Copy constructor from Dog called.\n";
}

Dog::~Dog(){
	std::cout << "Destructor from Dog called.\n";
}

Dog	&Dog::operator=(Dog const &dst)
{
	std::cout << "Assignation constructor overload fron Dog called\n";
	if (this != &dst)
		this->type = dst.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "🐶 says ruff! ruff!\n"; 
}