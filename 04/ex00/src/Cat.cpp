/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:55:25 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 15:53:52 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Cat::Cat(){
	type = "Cat🐱";
	std::cout << "Default constructor from Cat called.\n";
}

Cat::Cat(std::string type) {
	Animal::type = type;
	std::cout << "Constructor (with type) from Cat called.\n";
}

Cat::~Cat(){
	std::cout << "Destructor from Cat called.\n";
	// delete this;
}

Cat	&Cat::operator=(Cat &dst)
{
	this->type = dst.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "🐱 says meooooooow\n"; 
}
