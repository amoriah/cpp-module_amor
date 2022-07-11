/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:44:10 by amoriah           #+#    #+#             */
/*   Updated: 2022/07/11 17:14:08 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	// Contact		Contact;
	std::string	cmd;

	std::cout << " " << std::endl;
	std::cout << " |--------------------------PHONEBOOK---------------------------|" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Hello, my Lil pumpkin! What would you like: ADD, SEARCH or EXIT? Go ahead!" << std::endl;
	std::cin >> cmd;
	if (cmd == "ADD" || cmd == "add")
		PhoneBook.add_contact();
	else if (cmd == "SEARCH" || cmd == "search")
		std::cout << "no" << std::endl;
	else if (cmd == "EXIT" || cmd == "exit")
	{
		std::cout << "Bay, my Lil pumpkin!" << std::endl;
		return 0;
	}
	else
		std::cout << "Oops, PhoneBook is so dummy, doesn't know such command, try again. " << std::endl;
	return 0;
}