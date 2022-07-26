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
	
public:
	int		i;
	int		count;
	
	void	add_contact();
	void	search_contact();
	void	display_sheet();
	void	display_contact(int i);
};

#endif
