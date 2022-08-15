/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:56:26 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/10 16:30:30 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimals.hpp"
#include "Brain.hpp"

Dog::Dog(){
	type = "Dog🐶";
	_brain = new Brain;
	std::cout << "Default constructor from Dog called.\n";
}

Dog::Dog(Dog const &src) : AAnimal(src)
{
	*this = src;
	std::cout << "Copy constructor from Dog called.\n";
}

Dog::~Dog(){
	std::cout << "Destructor from Dog called.\n";
	delete _brain;
}

Dog	&Dog::operator=(Dog const &dst)
{
	std::cout << "Assignation constructor overload fron Dog called\n";
	if (this != &dst)
	{
		this->type = dst.type;
		_brain = new Brain(*dst._brain);//!!*
	}		
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "🐶 says ruff! ruff!\n"; 
}

void	Dog::printIdeas() const
{
	_brain->printIdeas();
}