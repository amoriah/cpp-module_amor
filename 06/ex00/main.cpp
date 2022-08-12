/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:57:37 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/12 19:39:31 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct types
{
	int			i = 0;
	double 		d = 0;
	float 		f = 0;
	char 		c = 0;
	int	spec_flag = 0;
	double		_d = 0;
};

// void	printTypes(types *type)
// {
	
// }

int	check(std::string str, types *type)
{
	if (str == "nan" || str == "nanf" || str == "-inf" || str == "-inf" || str == "-inff" || str == "+inff")
	{
		type->spec_flag = 1;
			return (1);
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str;
		types	*types;
		str = av[1];
		if (check(av, types) == 1)
		{
			types->d = std::strtod(str, 0);
			if (std::isinf(types->d) || std::isnan(types->d))
			{
				std::cout << "char: impossible\n";
				std::cout << "int: impossible\n";				
			}
			types->f = static_cast<float>(d);
			
			
		}
		return (0);
	}
	std::cout << "Error: number of arguments should be 2.\n";
	return (1);
}

	f = static_cast<float>(d);
	if (f - i == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (d - i == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;