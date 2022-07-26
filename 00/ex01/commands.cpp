#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add_contact()
{

	if (this->i > 7)
		this->i = 7;
	std::cout << "Please, add the information" << std::endl;
	std::cout << "First name-> ";
	std::getline(std::cin, this->cnt[this->i].FirstName);
	std::cout << "Last name-> ";
	std::getline(std::cin, this->cnt[this->i].LastName);
	std::cout << "Nick name-> ";
	std::getline(std::cin, this->cnt[this->i].NickName);
	std::cout << "Phone number-> ";
	std::getline(std::cin, this->cnt[this->i].PhoneNumber);
	std::cout << "Darkest secret-> ";
	std::getline(std::cin, this->cnt[this->i].DarkestSecret);
	this->i++;
	this->count = this->i;
}

void	PhoneBook::display_contact(int i)
{
	std::cout << "|" << std::setw(15) << i + 1;
	if (this->cnt[i].FirstName.length() > 15)
		std::cout << "|" << std::setw(16 - this->cnt[i].FirstName.length()) << this->cnt[i].FirstName.substr(0, 14) << ".";
	else
		std::cout << "|" << std::setw(15) << this->cnt[i].FirstName;
	if (this->cnt[i].LastName.length() > 15)
		std::cout << "|" << std::setw(16 - this->cnt[i].LastName.length()) << this->cnt[i].LastName.substr(0, 14) << ".";
	else
		std::cout << "|" << std::setw(15) << this->cnt[i].LastName;
	
	if (this->cnt[i].NickName.length() > 15)
		std::cout << "|" << std::setw(16 - this->cnt[i].NickName.length()) << this->cnt[i].NickName.substr(0, 14) << ".|\n";
	else
		std::cout << "|" << std::setw(15) << this->cnt[i].NickName << "|\n";
}

void	PhoneBook::display_sheet()
{
	std::cout << "|          Index|     First name|      Last name|      Nick name|" << std::endl;
}

void	PhoneBook::search_contact()
{
	std::string	num;

	this->i = -1;

	PhoneBook::display_sheet();
	while (++this->i < this->count)
		display_contact(this->i);
	this->i = 1;
	std::cout << "Enter contact number: ";
	std::getline(std::cin, num);
	if (std::cin.eof())
		return ;
	while (std::atoi(num.c_str()) > this->count || std::atoi(num.c_str()) < 1)
	{
		std::cout << "No such number in PhoneBook, please try again: ";
		std::getline(std::cin, num);
		if (std::cin.eof())
			return ;
	}
	while (std::atoi(num.c_str()) != this->i && this->i <= this->count)
		this->i++;
	std::cout << " " << std::endl;
	std::cout << "First name: " << PhoneBook::cnt[this->i - 1].FirstName << std::endl;
	std::cout << "Last name: " << PhoneBook::cnt[this->i - 1].LastName << std::endl;
	std::cout << "Nick name: " << PhoneBook::cnt[this->i - 1].NickName << std::endl;
	std::cout << "Phone number: " << PhoneBook::cnt[this->i - 1].PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << PhoneBook::cnt[this->i - 1].DarkestSecret << std::endl;
	std::cout << " " << std::endl;
}