/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:37:51 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/13 17:15:37 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int i;
	
	srand(time(NULL));
	i = rand() % 3;
	if (i == 0)	{
		std::cout << "generate A\n";
		return (new A());}
	if (i == 1)	{
		std::cout << "generate B\n";
		return (new B());}
	else {
		std::cout << "generate C\n";
		return (new C());}
}

void identify(Base &p)
{
	try
	{
		A obj = dynamic_cast<A &>(p);
		std::cout << "ref: A" << std::endl;
	}
	catch (const std::exception &e)
	{
		try
		{
			B obj = dynamic_cast<B &>(p);
			std::cout << "ref: B" << std::endl;
		}
		catch (const std::exception &e)
		{
			try
			{
				C obj = dynamic_cast<C &>(p);
				std::cout << "ref: C" << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n'; 
			}
		}
	}
}

void identify(Base *p)
{
	if ((dynamic_cast<A *>(p)) != 0)
		std::cout << "object identified as A\n";
	else if ((dynamic_cast<B *>(p)) != 0)
		std::cout << "object identified as B\n";
	else if ((dynamic_cast<C *>(p)) != 0)
		std::cout << "object identified as C\n";
}

int	main()
{
	Base *base;
	
	base = generate();
	identify(base);	
	identify(*base);
}