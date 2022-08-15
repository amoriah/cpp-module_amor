/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:42:33 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 16:17:18 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << C_GREEN << "[ TEST FROM SUBJ ]" << C_RESET << std::endl;
	Span sp1 = Span(5);
	sp1.addNumber(5);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << C_RED << "[ TEST OVERFLOW VECTOR ]" << C_RESET << std::endl;
	// Span sp2 = sp1;
	// s2.addNumber(7);
	std::cout << std::endl;

	std::cout << C_RED << "[ TEST ADD VALUE WITHOUT _N ]" << C_RESET << std::endl;
	// Span sp3;
	// sp3.addNumber(7);
	// std::cout << sp3.shortestSpan() << std::endl;
	// std::cout << sp3.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << C_GREEN << "[ TEST ADD 10 000 NUMBERS ]" << C_RESET << std::endl;
	Span sp4(10000);
	for (int i = 1; i <= 10000; i++)
		sp4.addNumber(i);
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	return (0);
}
