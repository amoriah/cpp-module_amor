/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:07:20 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:07:22 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Zombie
{
private:
	std::string name;
public:
	Zombie() { };
	~Zombie()
	{
		std::cout << this->name << " really died" << std::endl;
	}
	std::string	getName() const;
	void		setName(std::string name);
	void		announce() const;
};

Zombie *zombieHorde(int N, std::string name);

#endif
