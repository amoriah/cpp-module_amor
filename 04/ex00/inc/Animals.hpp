/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:32:09 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 15:43:30 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_H
# define ANIMALS_H

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual	~Animal();
	Animal(std::string type);
	Animal	&operator=(Animal const &dst);
		
	std::string		getType() const;
	virtual void	makeSound() const;
	void			setType(std::string type);
};

class Dog : public Animal
{
public:
	Dog();
	virtual	~Dog();
	Dog(std::string type);
	Dog	&operator=(Dog &dst);
	
	virtual void	makeSound() const;
};

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat	&operator=(Cat &dst);
	virtual	~Cat();
	
	virtual void	makeSound() const;
};

#endif