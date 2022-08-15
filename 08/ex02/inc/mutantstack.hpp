/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:19:23 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 17:34:08 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void){};
	virtual ~MutantStack(){};

	MutantStack(MutantStack const &src)
	{
		*this = src;
	};
	MutantStack &operator=(MutantStack const &src)
	{
		this->c = src.c;
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return (this->c.begin()); }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return (this->c.end()); }

#endif