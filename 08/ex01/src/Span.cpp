/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:42:39 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 15:43:06 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::addNumber(int num)
{
	if (_v.size() == _size)
		throw NoPlaceException();
	_v.push_back(num);
}

// void Span::betterAddNumber(int *nums, unsigned int len)
// {
// 	if (_v.size() == _size || _v.size() + len > _size)
// 		throw NoPlaceException();
// 	_v.insert(_v.end(), nums, nums+10000);
// }


//в зажании нихрена не понятно, просто на угад по выводу
int Span::shortestSpan() const
{
	if (_size > 1)
	{
		std::vector<int> v2;
		//в переданом диапазоне находит минимальный элемент
		int min_1 = *std::min_element(_v.begin(), _v.end());
		v2 = _v;
		//удалем переданный элемент из вектора
		v2.erase(std::find(v2.begin(), v2.end(), min_1));
		int min_2 = *std::min_element(v2.begin(), v2.end());
		return (min_2 - min_1);
	}
	else
		throw NoSpanException();
}

int Span::longestSpan() const
{
	if (_size > 1)
	{
		std::vector<int> v2;
		int max = *std::max_element(_v.begin(), _v.end());
		int min = *std::min_element(_v.begin(), _v.end());
		return (max - min);
	}
	else
		throw NoSpanException();
}
