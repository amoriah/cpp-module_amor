/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:44:10 by amoriah           #+#    #+#             */
/*   Updated: 2022/07/26 11:56:31 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//вопрос по модификаторам доступа, мне не нужен privet
int	main()
{
	PhoneBook	book;
	std::string	cmd;

	book.i = 0;
	std::cout << " " << std::endl;
	std::cout << " |--------------------------PHONEBOOK---------------------------|" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "What would you like: ADD, SEARCH or EXIT? Go ahead!" << std::endl;
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
		std::cout << "Write a command: ADD, SEARCH or EXIT? Go ahead!" << std::endl;
	} while (cmd != "EXIT" || cmd != "exit");
	std::cout << "Bye, my Lil pumpkin!" << std::endl;
		return 0;
}