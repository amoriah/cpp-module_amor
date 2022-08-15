/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:08:07 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 15:08:12 by amoriah          ###   ########.fr       */
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