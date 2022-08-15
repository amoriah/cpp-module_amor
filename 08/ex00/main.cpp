/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:25:30 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 13:25:12 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int	main()
{
	{
		int							elem;
		std::vector<int>			vec;
		std::vector<int>::iterator	it;
		
		srand(time(NULL));
		for(int i = 0; i < 10; i++)
			vec.push_back(rand() % 100);
		std::cout << C_BLUE << "   [  VECTOR CONTAINS: ]  " << C_RESET << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << i <<": " << vec[i] << std::endl;
		elem = vec[rand() % 10];// + 10;
		std::cout << "random element = " << elem << std::endl;
		std::cout << C_YELLOW << "   [  SEARCH ELEMENT: ]  " << C_RESET << std::endl;
		it = ::easyFind(vec, elem);
		std::cout << "EasyFind found element, element = " << *it << std::endl;
	}
	{
		int 						i;
		char						el;
		std::list<char>				lst;
		std::list<char>::iterator	it;

		srand(time(NULL));
		for(int i = 0; i < 26; i++)
			lst.push_back(i + 'a');//rand() % 26 
		it = lst.begin();
		i = -1;
		std::cout << C_BLUE << "   [  LIST CONTAINS: ]  " << C_RESET << std::endl;
		do {
			std::cout << ++i << ": " << *it << std::endl;
			it++;
		} while (it != lst.end());
		el = rand() % 26 + 'a';
		std::cout << "random element = " << el << std::endl;
		std::cout << C_YELLOW << "   [  SEARCH ELEMENT: ]  " << C_RESET << std::endl;
		it = ::easyFind(lst, el);
		std::cout << "EasyFind found element, element = " << *it << std::endl;		
	}
}
