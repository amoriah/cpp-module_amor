/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:42:42 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 15:51:13 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{

private:
	std::vector<int> _v;
	unsigned int _size;

public:
	Span(void) : _size(0) {};
	Span(const Span &src) { *this = src; };
	Span(unsigned int size) : _size(size) { };
	Span &operator=(const Span &src) {
		if (this != &src) {
		_size = src._size;
		_v = src._v;};
		return (*this);};
	virtual ~Span() {};//зачем виртуал

	void addNumber(int num);
	int shortestSpan() const;
	int longestSpan() const;
	// void betterAddNumber(int *num, unsigned int len);


	class NoPlaceException : public std::exception
	{
	public:
		virtual const char *what() const throw(){
			return ("No left space for new number");};
	};
	
	class NoSpanException : public std::exception
	{
	public:
		virtual const char *what() const throw(){
			return ("No span found");};
	};
};


// std::ostream &operator<<(std::ostream &o, Span &cl);

#endif