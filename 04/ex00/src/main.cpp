/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:58:04 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 15:53:45 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

class WrongAnimal
{
public:
	WrongAnimal() {};
	virtual	~WrongAnimal() {};
	virtual void	makeSound() const{
		std::cout << "WrongAnimal: buuuuuuuuuu!\n";
	}	
};

class WrongCat :  public WrongAnimal
{
public:
	WrongCat() {};
	virtual	~WrongCat() {};
	void	makeSound() const{
		std::cout << "\nWrongCat: mi mi mi\n\n";
	}	
};

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	WrongAnimal *a = new WrongCat();
	a->makeSound();

	//в диструкторе???
	delete meta;
	delete j;
	delete i;
	delete a;
	return 0;
}