#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "NonameScavTrap";
	_hitpoints = 100;
	_energypoints = 50;
	_damages = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_damages = rhs._damages;
	}
	return (*this);
}

ScavTrap::ScavTrap(std::string const &name)
{
	setName(name);
	_hitpoints = 100;
	_energypoints = 50;
	_damages = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	srand(time(NULL));

	std::cout << _name << " from ScavTraps is going to attack... ";
	if (_hitpoints == 0)
	{
		std::cout << "Oops! " << _name << " is already dead!!! He cannot attack any more!!!" << std::endl;
		return;
	}

	unsigned int new_damages = std::rand() % 15;
	std::cout << this->_name << " attacked " << target << ", " << new_damages << " points of damage!" << std::endl
			  << std::endl;
	_damages += new_damages;
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " have enterred in Gate keeper mode!!!" << std::endl
			  << std::endl;
}