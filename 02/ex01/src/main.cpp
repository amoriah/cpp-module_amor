/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:14:12 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/06 18:01:36 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// std::cout << "----------------------------------------------------" << std::endl;
	
	// std::cout << "a is " << a.toFloat() << " as Float" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as Float" << std::endl;
	// std::cout << "c is " << c.toFloat() << " as Float" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as Float" << std::endl;

	/*
	*float to int - 42.42
	*float check = 1 << 8;//256  100000000
	*std::cout << "check = " << check << std::endl;
	*int ret = 42.42 * check;//10859 - 10101001101011
	*std::cout << "ret = " << ret << std::endl;
	*int fin = ret >> 8;//42 - 101010
	*std::cout << "fin = " << fin << std::endl;
	*/

	return 0;
}
