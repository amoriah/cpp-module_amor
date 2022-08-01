/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:57:40 by yono              #+#    #+#             */
/*   Updated: 2022/08/01 18:15:01 by yono             ###   ########.fr       */
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