/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:30:46 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 19:50:15 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &orig);
	ScavTrap	&operator=(const ScavTrap &src);
	
	void	guardGate();
	void	attack(std::string const &target);	
};

#endif
