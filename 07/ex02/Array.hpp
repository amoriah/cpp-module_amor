/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:44:05 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/14 18:29:50 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>
# include <ctime>
# include <stdlib.h>

template <class T>

class Array
{
private:
	int	_len;
	T	*_arr;
public:
	Array() : _len(0), _arr(NULL) {};
	Array(unsigned int N) : _len(N), _arr(new T[N]) {};
	Array(const Array &src) : _arr(new T[src._len]), _len(src._len){
		for (int i = 0; i < src._len; i++)
			_arr[i] = src._arr[i];};
	~Array() {
		if(_arr)
			delete[] _arr;};

	Array	&operator=(Array &src)
	{
		if (this == &src)
			return *this;
		this->_len = src._len;
		this->_arr = new T[_len];
		for (int i = 0; i < _len; i++)
			this->_arr[i] = src._arr[i];
		return *this;
	};

	class IndException : public std::exception
	{
	public:
		const char* what() const throw(){return "IndexException:index out of range";};
	};

	T	&operator[](int i)
	{
		// std::cout<<"operator[]\n";
		if (i >= _len || i < 0)
			throw Array::IndException();
		return (_arr[i]);
	};
	
	int	size() {return _len;};	
};

#endif