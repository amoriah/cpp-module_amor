#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include "PhoneBook.hpp"

class Contact
{
public:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
};

#endif