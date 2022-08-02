/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:45:55 by yono              #+#    #+#             */
/*   Updated: 2022/08/02 16:55:28 by yono             ###   ########.fr       */
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
