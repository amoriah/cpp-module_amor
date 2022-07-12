/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:44:10 by amoriah           #+#    #+#             */
/*   Updated: 2022/07/12 14:26:15 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	book;
	std::string	cmd;
	// int j = -1;

	book.i = 0;
	std::cout << " " << std::endl;
	std::cout << " |--------------------------PHONEBOOK---------------------------|" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "What would you like: ADD, SEARCH or EXIT? Go ahead!" << std::endl;
	do {
		std::cin >> cmd;
		if (cmd == "ADD" || cmd == "add")
		{
			book.add_contact();
			book.i++;
		}
		else if (cmd == "SEARCH" || cmd == "search")
			book.search_contact();
		else if (cmd == "EXIT" || cmd == "exit")
			break;
		else
			std::cout << "Oops, PhoneBook is so dummy, doesn't know such command, try again. " << std::endl;		
		std::cout << "Write a command: ADD, SEARCH or EXIT? Go ahead!" << std::endl;
	} while (cmd != "EXIT" || cmd != "exit");
	// while(++j < book.i)
	// {
	// 	std::cout << " " << std::endl;
	// 	std::cout << j << std::endl;
	// 	std::cout << "First name: " << book.cnt[j].FirstName << std::endl;
	// 	std::cout << "Last name: " << book.cnt[j].LastName << std::endl;
	// 	std::cout << "Nick name: " << book.cnt[j].NickName << std::endl;
	// 	std::cout << "Phone number: " << book.cnt[j].PhoneNumber << std::endl;
	// 	std::cout << "Darkest secret: " << book.cnt[j].DarkestSecret << std::endl;
		
	// }
	std::cout << "Bye, my Lil pumpkin!" << std::endl;
		return 0;
}