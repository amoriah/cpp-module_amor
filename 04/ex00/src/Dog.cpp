/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:56:26 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 15:53:54 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Dog::Dog(){
	type = "Dog🐶";
	std::cout << "Default constructor from Dog called.\n";
}

Dog::Dog(std::string type) { Animal::type = type;
	std::cout << "Constructor (with type) from Dog called.\n";
}

Dog::~Dog(){
	std::cout << "Destructor from Dog called.\n";
	// delete this;
}

Dog	&Dog::operator=(Dog &dst)
{
	this->type = dst.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "🐶 says ruff! ruff!\n"; 
}