/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:32:09 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 20:41:27 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_H
# define ANIMALS_H

//---colors----------
# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

# define ULINE   "\033[21m"

# define B_BLACK   "\e[30;40m"
# define B_RED     "\e[30;41m"
# define B_GREEN   "\e[30;42m"
# define B_YELLOW  "\e[30;43m"
# define B_BLUE    "\e[30;44m"
# define B_MAGENTA "\e[30;45m"
# define B_CYAN    "\e[30;46m"

# include <iostream>
# include <string>
# include "Brain.hpp"


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
	virtual void	makeSound() const = 0;
	void			setType(std::string type);
};

class Dog : public Animal
{
private:
	Brain *_brain;
	
public:
	Dog();
	virtual	~Dog();
	Dog(Dog const &src);
	Dog	&operator=(Dog const &dst);
	void			printIdeas() const;
	
	virtual void	makeSound() const;
};

class Cat : public Animal
{
private:
	Brain *_brain;
	
public:
	Cat();
	virtual	~Cat();
	Cat(Cat const &src);
	Cat	&operator=(Cat const &dst);
	void			printIdeas() const;
	
	virtual void	makeSound() const;
};

#endif