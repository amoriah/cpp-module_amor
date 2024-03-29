/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:15:50 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/07 10:08:39 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------------------------------------конструкторы
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
//------------------------------------------диструктор
Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}
//---------------------------------------перегрузки(конструктор копирования и побитового сдвига)
std::ostream &operator<<(std::ostream &out, const Fixed &obj) //ostream класс для вывода в файл
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
	return *this;//.мы возвращаем скрытый указатель *this в функциях перегрузки операторов т.е. текущий объект класса Number
}
//--------------------------------------------------методы
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
//-----------------------------перегрузка операторов
Fixed Fixed::operator+(const Fixed &other) const 
{
	Fixed res(toFloat() + other.toFloat());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const 
{
	Fixed res(toFloat() - other.toFloat());
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const 
{
	Fixed res(toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const 
{
	Fixed res(toFloat() / other.toFloat());
	return res;
}
//---------------------------------пре-инкремент
Fixed &Fixed::operator++() 
{
	_value++;
	return *this;
}
//---------------------------------пост-инкремент
Fixed Fixed::operator++(int) 
{
	Fixed old(toFloat());
	_value++;
	return old;
}
//-----------------------------------пре-декримент
Fixed &Fixed::operator--() 
{
	_value--;
	return *this;
}
//---------------------------------пост-декримент
Fixed Fixed::operator--(int) 
{
	Fixed old(toFloat());
	_value--;
	return old;
}
//-----------------------------------перегрузка операторов сравнения
bool Fixed::operator>(const Fixed &other) const 
{
	if (_value > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const 
{
	if (_value < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const 
{
	if (_value >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const 
{
	if (_value <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const 
{
	if (_value == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const 
{
	if (_value != other.getRawBits())
		return true;
	return false;
}
//----------------------------------------вычисления
Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
	if (a < b)
		return a;
	return b;
}	

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
	if (a > b)
		return a;
	return b;
}
