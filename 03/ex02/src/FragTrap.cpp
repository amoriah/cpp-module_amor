#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "NonameFragTrap";
	_hitpoints = 100;
	_energypoints = 100;
	_damages = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_damages = rhs._damages;
	}
	return (*this);
}

FragTrap::FragTrap(std::string const &name)
{
	setName(name);
	_hitpoints = 100;
	_energypoints = 100;
	_damages = 30;
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << ": Yo... give me five!!!" << std::endl
			  << std::endl;
}