/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:58:04 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 20:33:18 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Brain.hpp"

int main()
{
	Animal *array[4];
	std::cout << B_GREEN <<"    CHECK CREATING ARRAY    " << C_RESET << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout << C_GREEN <<  "create Cat " << i << C_RESET << std::endl;
		array[i] = new Cat;
	}
	for (int i = 2; i < 4; i++)
	{
		std::cout << C_GREEN << "create Dog " << i << C_RESET << std::endl;
		array[i] = new Dog;
	}		
	std::cout << B_BLUE  <<"     CHECK DELETE ARRAY     " << C_RESET << std::endl;
	for(int i = 0; i < 4; i++)
	{
		std::cout << C_BLUE << "delete elem " << i << C_RESET <<std::endl;;
		delete array[i];
	}
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