/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:55:25 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 18:03:05 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Cat::Cat(){
	type = "Cat🐱";
	std::cout << "Default constructor from Cat called.\n";
}

Cat::Cat(Cat const &src) : Animal(src) {
	*this = src;
	std::cout << "Copy constructor from Cat called.\n";
}

Cat::~Cat(){
	std::cout << "Destructor from Cat called.\n";
}

Cat	&Cat::operator=(Cat const &dst)
{
	std::cout << "Assignation constructor overload fron Cat called\n";
	if (this != &dst)
		this->type = dst.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "🐱 says meooooooow\n"; 
}
