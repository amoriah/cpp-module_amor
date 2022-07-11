#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include "PhoneBook.hpp"

class Contact
{
	// std::string	persData[5];

	struct Inf
	{
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	};

	std::string	 Data[] = {"FirstName", "LastName", "NickName", "PhoneNumber", "DarkestSecret"};

	// enum	Data
	// {
	// 	FirstName = 1,
	// 	LastName,
	// 	NickName,
	// 	PhoneNumber,
	// 	DarkestSecret,
	// };	
};

#endif