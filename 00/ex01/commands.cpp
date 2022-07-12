#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add_contact()
{

	if (this->i > 7)
		this->i = 7;
	std::cout << "Please, add the information" << std::endl;
	std::cout << "First name-> ";
	// std::getline(std::cin, this->cnt[0].FirstName);
	std::cin >> this->cnt[this->i].FirstName;
	std::cout << "Last name-> ";
	std::cin >> this->cnt[this->i].LastName;
	std::cout << "Nick name-> ";
	std::cin >> this->cnt[this->i].NickName;
	std::cout << "Phone number-> ";
	std::cin >> this->cnt[this->i].PhoneNumber;
	std::cout << "Darkest secret-> ";
	std::cin >> this->cnt[this->i].DarkestSecret;
	this->count = this->i;
}

void	PhoneBook::search_contact()
{
	std::string	num;

	this->i = 0;
	std::cout << "Enter contact number: ";
	std::cin >> num;
	while (std::stoi(num) > 8 || std::stoi(num) < 1)
	{
		std::cout << "No such number in PhoneBook, please try again: ";
		std::cin >> num;
	}
	while (std::stoi(num) != this->i && this->i < this->count)
		this->i++;
	std::cout << " " << std::endl;
	// 	std::cout << j << std::endl;
	std::cout << "First name: " << PhoneBook::cnt[this->i].FirstName << std::endl;
	std::cout << "Last name: " << PhoneBook::cnt[this->i].LastName << std::endl;
	std::cout << "Nick name: " << PhoneBook::cnt[this->i].NickName << std::endl;
	std::cout << "Phone number: " << PhoneBook::cnt[this->i].PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << PhoneBook::cnt[this->i].DarkestSecret << std::endl;
}