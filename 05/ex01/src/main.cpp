/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:34:51 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:34:52 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	AForm f("formular", 10, 4);
	Bureaucrat bob("Bob", 11);

	std::cout << f << std::endl;
	std::cout << bob << std::endl;
	
	bob.signForm(f);
	bob.upGrade();
	bob.signForm(f);

	std::cout << std::endl << f << std::endl;

	return 0;
}
