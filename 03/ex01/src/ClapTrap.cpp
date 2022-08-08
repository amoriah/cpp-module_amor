#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("NamelessTrap"),
						   _hitpoints(10), _energypoints(10), _damages(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called for new ClapTrap" << std::endl;
	*this = src;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energypoints = rhs._energypoints;
		this->_damages = rhs._damages;
	}
	return (*this);
}

ClapTrap::ClapTrap(std::string const &name) : _hitpoints(10), _energypoints(10), _damages(0)
{
	std::cout << "ClapTrap constructor called for " << name << std::endl;
	_name = name;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
	std::cout << "New ClapTrap name is " << name << std::endl;
}

unsigned int ClapTrap::getDamages(void) const
{
	return (this->_damages);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << _name << " the son of ClapTraps is going to attack... ";
	if (_hitpoints == 0)
	{
		std::cout << _name << " ... oh, no! He is already dead!!! He cannot attack any more!!!" << std::endl;
		return;
	}

	unsigned int new_damages = std::rand() % 10;
	std::cout << this->_name << " attacked " << target << ", causing " << new_damages << " points of damage!" << std::endl
			  << std::endl;
	_damages += new_damages;
}

void ClapTrap::takeDamage(unsigned int amount)
{

	unsigned int hitpoints_before = _hitpoints;
	if (amount == 0)
		std::cout << _name << ": HA-HA-HA! Seriously, screw you!!!" << std::endl;
	else if (_hitpoints == 0)
		std::cout << _name << " is already dead!!!" << std::endl;
	else if (amount >= hitpoints_before)
	{
		_hitpoints = 0;
		if (_energypoints < 2)
			std::cout << _name << " died after hard fighting... " << std::endl
					  << "RIP " << std::endl
					  << _name << std::endl;
		else
		{
			std::cout << _name << "... He was almost dead... But, energy points filled his hit points for 10 points!" << std::endl
					  << "He is ready to fight again!" << std::endl  << std::endl;
			_hitpoints += 10;
			_energypoints -= 2;
		}
	}
	else
	{
		_hitpoints -= amount;
		std::cout << _name << " was damaged! His hit points decreased from " << hitpoints_before << " to " << _hitpoints << "! :(" << std::endl
				  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Repairing process started ..." << std::endl;
	std::cout << "Hit points before : " << _hitpoints << std::endl;
	_hitpoints += amount;
	std::cout << "Hit points after : " << _hitpoints << "... Done!" << std::endl;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &trap)
{
	o << trap.getName();
	return (o);
}
