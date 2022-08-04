/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:17:39 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:28:51 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG << std::endl;
	std::cout << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO << std::endl;
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING << std::endl;
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR << std::endl;
	std::cout << std::endl;
}

typedef void (Harl::*FP)();

void Harl::complain(std::string level)
{
	Harl harl;

	FP func[] = {	&Harl::debug,
					&Harl::info,
					&Harl::warning,
					&Harl::error};

	std::string array[] = {	"DEBUG",
							"INFO",
							"WARNING",
							"ERROR"};

	for(int i = 0; i < 4; i++)
		if(level == array[i])
			(harl.*func[i])();
}
