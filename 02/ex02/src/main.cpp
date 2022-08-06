/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:15:54 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/06 19:43:35 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	//"Int constructor called" - _value = 512
	//"Float constructor called" - _value = 1292
	//operator* called ?????
	//"Copy constructor called"(512 * 1292 = 661504) b._value = 661504
	std::cout << a << std::endl;//0
	std::cout << ++a << std::endl;//
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
