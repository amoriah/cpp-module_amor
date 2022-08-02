/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:51:48 by yono              #+#    #+#             */
/*   Updated: 2022/08/02 16:51:49 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add_contact()
{
	std::string inf;

	if (this->i > 7)
		this->i = 7;
	std::cout << "Please, add the information" << std::endl;
	for (int j = 0; j < 5; j++)
	{
		std::cout << outSrting[j];
		std::getline(std::cin, inf);
		cnt[this->i].setInfo(j, inf);
	}
	this->i++;
	this->count = this->i;
}

void	PhoneBook::display_contact(int i)
{
	std::cout << "|" << std::setw(15) << i + 1;
	for (int j = 0; j < 3; j++)
	{
		if (this->cnt[i].retInfo(j).length() > 15)
			std::cout << "|" << std::setw(16 - this->cnt[i].retInfo(j).length()) << this->cnt[i].retInfo(j).substr(0, 14) << ".";
		else
			std::cout << "|" << std::setw(15) << this->cnt[i].retInfo(j);
	}
	std::cout << "|\n";
}

void	PhoneBook::display_sheet()
{
	std::cout << "|          Index|     First name|      Last name|      Nick name|" << std::endl;
	for (int j = 0; j < this->count; j++)
		display_contact(j);
}

void	PhoneBook::search_contact()
{
	std::string	outNum;
	int			ind;

	ind = 1;
	PhoneBook::display_sheet();
	std::cout << "Enter contact number: ";
	std::getline(std::cin, outNum);
	if (std::cin.eof())
		return ;
	while (std::atoi(outNum.c_str()) > this->count || std::atoi(outNum.c_str()) < 1)
	{
		std::cout << "No such number in PhoneBook, please try again: ";
		std::getline(std::cin, outNum);
		if (std::cin.eof())
			return ;
	}
	while (std::atoi(outNum.c_str()) != ind && ind <= this->count)
		ind++;
	std::cout << " " << std::endl;
	for (int j = 0; j < 5; j++)
		std::cout << outSrting[j] << cnt[ind - 1].retInfo(j) << std::endl;
	std::cout << " " << std::endl;
}