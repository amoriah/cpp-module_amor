/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:14 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 15:53:50 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal(){
	type = "Animal";
	std::cout << "Default constructor from Animal called.\n";
}

Animal::Animal(std::string type) : type(type){
	std::cout << "Constructor (with type) from Animal called.\n";
}

Animal::~Animal(){
	std::cout << "Destructor from Animal called.\n";
	// delete this;
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