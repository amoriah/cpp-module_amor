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