/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:12:00 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:12:02 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Weapon 
{
public:
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string type);
private:
	std::string type;
};

#endif