#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	ScavTrap(std::string const &name);
	~ScavTrap(void);

	void attack(std::string const &target);
	void guardGate(void);
};

#endif