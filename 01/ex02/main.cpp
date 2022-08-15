/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:09:52 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:09:54 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;int	main()
{
	std::string greeting = "HI THIS IS BRAIN";
	std::string *stringPTR = &greeting;
	std::string &stringREF = greeting;

	std::cout << "adress of string greeting: " << &greeting << std::endl;
	std::cout << "adress of string pointer: " << stringPTR << std::endl;
	std::cout << "adress of string reference: " << &stringREF << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "value of string greeting: " << greeting << std::endl;
	std::cout << "value of string pointer: " << *stringPTR << std::endl;
	std::cout << "value of string reference: " << stringREF << std::endl;
}

