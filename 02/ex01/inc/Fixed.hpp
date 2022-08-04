/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:14:01 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 17:14:02 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIX_H
# define FIX_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _value;
		static const int _afterComma = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &a);
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
		//прегрузка <<
		//для преобразования в float?
		std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
