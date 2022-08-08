#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energypoints;
	unsigned int _damages;

public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	ClapTrap(std::string const &name);
	~ClapTrap(void);

	std::string getName(void) const;
	void setName(std::string name);
	unsigned int getDamages(void) const;

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &trap);

#endif

/*Hit points represent the number of points of damage 
a creature or monster can take during battle before dying. 
Any creature reduced to 0 hit points (or less) is dead

Damages - ClapTrap causes damages 

Energy


*/