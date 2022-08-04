/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:27 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 15:07:28 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact cnt[8];
	std::string outSrting[5];
	
public:
	int		i;
	int		count;
	
	PhoneBook();
	~PhoneBook() { }
	void	add_contact();
	void	search_contact();
	void	display_sheet();
	void	display_contact(int i);
};

#endif
