/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:14 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/10 17:44:47 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Brain.hpp"

Animal::Animal(){
	type = "Animal";
	std::cout << "Default constructor from Animal called.\n";
}

Animal::Animal(Animal const &src){
	*this = src;
	std::cout << "Copy constructor from Animal called.\n";
}

Animal::~Animal(){
	std::cout << "Destructor from Animal called.\n";
}

Animal	&Animal::operator=(Animal const &dst)
{
	std::cout << "Assignment operator overload from Animal called\n";
	if (this != &dst)
		this->type = dst.type;
	return (*this);
}

std::string	Animal::getType() const {
	return(type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound() const
{
	std::cout << "what the animal says???\n"; 
}