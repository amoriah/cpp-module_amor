/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:49 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 15:07:51 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setInfo(int i, std::string value)
{
	info[i] = value;
}

std::string	Contact::retInfo(int i)
{
	return(this->info[i]);
}
