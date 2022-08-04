/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:15:50 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 17:15:51 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//конструкторы
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_value = value << _afterComma;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	float pow = 1 << _afterComma;
	_value = roundf(value * pow);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


//перегрузки
std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &other)
		return *this;
	_value = other.getRawBits();
	return *this;
}


//методы
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

float Fixed::toFloat(void) const {
	float pow = 1 << _afterComma;
	return (_value / pow);
}

int Fixed::toInt(void) const {
	return _value >> _afterComma;
}


//действия
Fixed Fixed::operator+(const Fixed &other) const {
	Fixed res(toFloat() + other.toFloat());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed res(toFloat() - other.toFloat());
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed res(toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed res(toFloat() / other.toFloat());
	return res;
}

Fixed &Fixed::operator++() {
	_value++;
	return *this;
}

Fixed &Fixed::operator--() {
	_value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old(toFloat());
	_value++;
	return old;
}

Fixed Fixed::operator--(int) {
	Fixed old(toFloat());
	_value--;
	return old;
}


//сравнение
bool Fixed::operator>(const Fixed &other) const {
	if (_value > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const {
	if (_value < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const {
	if (_value >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const {
	if (_value <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const {
	if (_value == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const {
	if (_value != other.getRawBits())
		return true;
	return false;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}	

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}
