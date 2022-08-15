/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:58:04 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/10 16:48:54 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimals.hpp"
#include "Brain.hpp"

int main()
{
	// AAnimal fail;
	std::cout << B_YELLOW  <<"     CHECK DEEP COPY     " << C_RESET << std::endl;
	std::cout << C_YELLOW  <<"     create original classes:     " << C_RESET << std::endl;
	Cat	*origCat = new Cat;
	Dog *origDog = new Dog;
	std::cout << C_YELLOW  <<"     create copy classes:     " << C_RESET << std::endl;
	Cat *copyCat = new Cat(*origCat);
	Dog *copyDog = new Dog(*origDog);
	copyCat->makeSound();
	copyDog->makeSound();
	std::cout << B_MAGENTA  <<"        PRINT IDEAS        " << C_RESET << std::endl;	
	copyCat->printIdeas();
	copyDog->printIdeas();
	std::cout << B_BLUE  <<"     DELETE THESE CLASSES     " << C_RESET << std::endl;	
	delete origCat;
	delete origDog;
	delete copyCat;
	delete copyDog;
	return 0;
}