/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:13:40 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 17:13:41 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIX_H
# define FIX_H

# include <iostream>

class Fixed {
	private:
		int _value;
		static const int _afterComma = 8;
	public:
		Fixed(void);
		Fixed(Fixed &a);
		~Fixed();
		Fixed &operator =(Fixed &other);

		int getRawBits(void);
		void setRawBits(int const raw);
};

#endif
