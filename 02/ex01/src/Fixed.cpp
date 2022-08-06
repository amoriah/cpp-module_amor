/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:14:07 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/06 16:20:52 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int value) 
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _bit;
}

Fixed::Fixed(const float value) 
{
	std::cout << "Float constructor called" << std::endl;
	float pow = 1 << _bit;
	_value = roundf(value * pow);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) 
{
	out << obj.toFloat();
	return out;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &other)
		return *this;
	_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) 
{
	_value = raw;
}

float Fixed::toFloat(void) const 
{
	float pow = 1 << _bit;
	return (_value / pow);
}

int Fixed::toInt(void) const 
{
	return _value >> _bit;
}
