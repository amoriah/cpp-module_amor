/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:22 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 15:07:23 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include "PhoneBook.hpp"

class Contact
{
private:
	std::string info[5];

public:
	void		setInfo(int i, std::string value);
	std::string retInfo(int i);
};

#endif