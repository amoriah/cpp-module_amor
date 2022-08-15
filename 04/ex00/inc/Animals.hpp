/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:32:09 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 19:48:39 by amoriah          ###   ########.fr       */
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
	Animal(Animal const &src);
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
	Dog(Dog const &src);
	Dog	&operator=(Dog const &dst);
	
	virtual void	makeSound() const;
};

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &src);
	Cat	&operator=(Cat const &dst);
	virtual	~Cat();
	
	virtual void	makeSound() const;
};

#endif