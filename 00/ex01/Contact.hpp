#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include "PhoneBook.hpp"

class Contact
{
	std::string	persData[5];
// private:
public:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	// std::string infOne = "FirstName";
	// std::string infTwo = "LastName";
	// std::string infThree = "NickName";
	// std::string infFour = "PhoneNumber";
	// std::string infFive = "DarkestSecret";

	// std::string	persData[5] = {"FirstName", "LastName", "NickName", "PhoneNumber", "DarkestSecret"};

	// enum	Data
	// {
	// 	FirstName = 0,
	// 	LastName,
	// 	NickName,
	// 	PhoneNumber,
	// 	DarkestSecret,
	// };	
};

#endif