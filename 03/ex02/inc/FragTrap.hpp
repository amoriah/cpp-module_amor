#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	FragTrap(std::string const &name);
	~FragTrap(void);

	void highFivesGuys(void);
};

#endif