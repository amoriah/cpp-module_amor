/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:55:20 by yono              #+#    #+#             */
/*   Updated: 2022/07/29 18:56:12 by yono             ###   ########.fr       */
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
