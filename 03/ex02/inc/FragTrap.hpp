/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:26:15 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/08 20:30:37 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &orig);
	FragTrap	&operator=(const FragTrap &src);
	
	void	guardGate();
	void	attack(std::string const &target);	
	void	highFivesGuys(void);
};

#endif
