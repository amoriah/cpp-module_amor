/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:06:00 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/14 18:32:54 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

int	main()
{
	Array<int> iArray(7);
	Array<double> dArray(8);
	Array<float> fArray(9);
	Array<char> cArray(10);
	
	std::cout <<C_BLUE<<"   [ CHECK SIZES OF ARRAYS ]  " << C_RESET <<std::endl;
	int i = iArray.size();
	int d = dArray.size();
	int f = fArray.size();
	int c = cArray.size();
	std::cout << "size int = " << i << std::endl;
	std::cout << "size double = "<< d << std::endl;
	std::cout << "size float = "<< f << std::endl;
	std::cout << "size char = "<< c << std::endl;
	
	std::cout <<C_RED<<"   [ CHECK INT ARRAY'S CONTENTS ]   " << C_RESET <<std::endl;
	for (int i = 0; i < iArray.size(); i++)
	{
		iArray[i] = i;
		std::cout << "iArray[i] = " << iArray[i] << std::endl;
	}
	std::cout <<C_MAGENTA<<"   [ CHECK DOUBLE ARRAY'S CONTENTS ]   " << C_RESET <<std::endl;
	for (int i = 0; i < dArray.size(); i++)
	{
		dArray[i] = i + 0.5;
		std::cout << "dArray[i] = " << dArray[i] << std::endl;
	}	
	std::cout <<C_GREEN<<"   [ CHECK FLOAT ARRAY'S CONTENTS ]   " << C_RESET <<std::endl;
	for (int i = 0; i < fArray.size(); i++)
	{
		fArray[i] = i + 0.5;
		std::cout << "fArray[i] = " << fArray[i] << "f" << std::endl;
	}	
	std::cout <<C_YELLOW<<"   [ CHECK CHAR ARRAY'S CONTENTS ]   " << C_RESET <<std::endl;
	for (int i = 0; i < cArray.size(); i++)
	{
		cArray[i] = i + 'a';
		std::cout << "cArray[i] = " << cArray[i] << std::endl;
	}
	// cArray[11] = i + 'a';//error
	
	// int *a = new int(); 
	// std::cout << *a << std::endl;//0
	return (0);
}

