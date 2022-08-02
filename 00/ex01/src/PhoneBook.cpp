/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:51:52 by yono              #+#    #+#             */
/*   Updated: 2022/08/02 16:51:53 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	outSrting[0] = "FirstName > ";
	outSrting[1] = "LastName > ";
	outSrting[2] = "NickName > ";
	outSrting[3] = "PhoneNumber > ";
	outSrting[4] = "DarkestSecret > ";
}