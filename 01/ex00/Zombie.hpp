/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:51:24 by amoriah           #+#    #+#             */
/*   Updated: 2022/07/30 11:30:16 by yono             ###   ########.fr       */
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