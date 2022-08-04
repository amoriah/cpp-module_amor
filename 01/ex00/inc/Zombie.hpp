/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:05:05 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:05:07 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		this->name = name;
	}
	~Zombie()
	{
		std::cout << this->name << " is really died" << std::endl;
	}
	std::string	getName() const;
	void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif 