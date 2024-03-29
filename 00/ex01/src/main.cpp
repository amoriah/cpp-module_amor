/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:58 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/07 16:28:49 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static void	printHead()
{
	std::cout << " " << std::endl;
	std::cout << " |--------------------------PHONEBOOK---------------------------|" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Hello^^ What would you like: ADD, SEARCH or EXIT? Go ahead!" << std::endl;	
}

int	main()
{
	PhoneBook	book;
	std::string	cmd;

	book.i = 0;
	printHead();
	do {
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			cmd = "exit";
		if (cmd == "ADD" || cmd == "add")
			book.add_contact();
		else if (cmd == "SEARCH" || cmd == "search")
			book.search_contact();
		else if (cmd == "EXIT" || cmd == "exit")
			break;
		else
			std::cout << "Oops, PhoneBook is so dummy, doesn't know such command, try again. " << std::endl;		
		std::cout << "Write a command: ADD, SEARCH or EXIT?" << std::endl;
	} while (cmd != "EXIT" || cmd != "exit");
	std::cout << "Bye, my Lil pumpkin!" << std::endl;
		return 0;
}