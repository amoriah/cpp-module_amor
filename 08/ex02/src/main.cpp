/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:19:40 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 18:03:21 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	for (int i = 1; i <= 100; i++)
// 		mstack.push(i);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	std::cout << "begin: " << *it << std::endl;
// 	std::cout << "end: " << *(ite - 1) << std::endl;
// 	for (int i = 1; i <= 50; i++)
// 		mstack.pop();
// 	it = mstack.begin();
// 	ite = mstack.end();
// 	std::cout << "begin: " << *it << std::endl;
// 	std::cout << "end: " << *(ite - 1) << std::endl;
// 	return 0;
// }

// int main()
// {
// 	std::list<int> mstack;
// 	for (int i = 1; i <= 100; i++)
// 		mstack.push_back(i);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();

// 	std::cout << "begin: " << *it << std::endl;
// 	std::cout << "end: " << *ite << std::endl;
// 	for (int i = 1; i <= 50; i++)
// 		mstack.pop_back();
// 	it = mstack.begin();
// 	ite = mstack.end();
// 	std::cout << "begin: " << *it << std::endl;
// 	std::cout << "end: " << *ite << std::endl;

// 	return (0);
// }