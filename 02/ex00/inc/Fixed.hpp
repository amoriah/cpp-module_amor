/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:13:40 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/06 15:45:23 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIX_H
# define FIX_H

# include <iostream>

class Fixed 
{
private:
	int _value;
	static const int _bit = 8;
	
public:
	Fixed();
	Fixed(Fixed &obj);
	Fixed &operator=(Fixed &other);
	~Fixed();
	int getRawBits();
	void setRawBits(int const raw);
};

#endif
