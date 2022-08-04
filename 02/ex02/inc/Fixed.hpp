/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:15:42 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 17:15:43 by amoriah          ###   ########.fr       */
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

		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);		
		static const Fixed &max(const Fixed &a, const Fixed &b);

		// pre increment
		Fixed	&operator++();
		// pre decrement
		Fixed	&operator--();
		// post increment
		Fixed	operator++(int);
		// post decrement
		Fixed	operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
	
//прегрузка <<
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
