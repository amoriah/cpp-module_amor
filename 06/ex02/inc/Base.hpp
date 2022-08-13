/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:39:23 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/13 17:06:02 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <ctime>
#include <stdlib.h>
#include <iostream>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base	*generate(void);
void	identify(Base& p);
void	identify(Base* p);

#endif