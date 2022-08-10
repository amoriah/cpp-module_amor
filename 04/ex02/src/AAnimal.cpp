/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:48:14 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/10 16:27:59 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimals.hpp"
#include "Brain.hpp"

AAnimal::AAnimal(){
	type = "AAnimal";
	std::cout << "Default constructor from AAnimal called.\n";
}

AAnimal::AAnimal(AAnimal const &src){
	*this = src;
	std::cout << "Copy constructor from AAnimal called.\n";
}

AAnimal::~AAnimal(){
	std::cout << "Destructor from AAnimal called.\n";
}

AAnimal	&AAnimal::operator=(AAnimal const &dst)
{
	std::cout << "Assignment operator overload from AAnimal called\n";
	if (this != &dst)
		this->type = dst.type;
	return (*this);
}

std::string	AAnimal::getType() const {
	return(type);
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}
