/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:19:18 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/14 15:04:22 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

template <typename T, typename F> 

void	Iter(T *arr, int len, F func)
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

template <typename T1>

void	func(T1 &smth)
{
	std::cout << "something's adress = " << &smth << std::endl;
}
template <typename T1>

void	func1(T1 &smth)
{
	std::cout << "something = " << smth << std::endl;
}

class DontKnow
{
public:
	DontKnow() {};
	~DontKnow() {};
};


int	main()
{
	int iArr[3] = {1, 2, 3};
	::Iter(iArr, 3, ::func<int>);

	char cArr[] = "Aloha";
	::Iter(cArr, 5, ::func1<char>);

	std::string	sArr[] = {"Kati", "Vova", "Ivan"};
	::Iter(sArr, 3, ::func<std::string>);

	DontKnow num[3] = {
		DontKnow(),
		DontKnow(),
		DontKnow()		
	};
	::Iter(num, 3, ::func<DontKnow>);	
}
