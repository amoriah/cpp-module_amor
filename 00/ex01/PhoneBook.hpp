#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{

public:
	Contact cnt[8];
	int		i;
	int		count;
	
	void	add_contact();
	void	search_contact();
	// void	search_contact();
};

#endif
