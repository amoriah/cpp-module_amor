#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class	Zombie 
{
private:
	std::string name;

public:
	Zombie(std::string name)
	{
		// std::cout << "ctor" << std::endl;
		this->name = name;
	}
	~Zombie()
	{
		// std::cout << "dtor" << std::endl;		
	}
	std::string	getName() const;
	void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif 