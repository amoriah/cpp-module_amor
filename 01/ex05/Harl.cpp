/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:44:13 by yono              #+#    #+#             */
/*   Updated: 2022/08/03 15:29:46 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	lvl[0] = "DEBUG";
	lvl[1] = "INFO";
	lvl[2] = "WARNING";
	lvl[3] = "ERROR";
}

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
