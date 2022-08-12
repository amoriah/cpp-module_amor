/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:35 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:35:36 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	try
	{
		Bureaucrat b("x1", 140);
		Bureaucrat b1("y1", 70);

		ShrubberyCreationForm sf("SignedPaper");

		AForm *f = &sf;
		f->beSigned(b1);
		f->beSigned(b);
		f->Execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("x", 70);
		Bureaucrat b1("y", 2);

		RobotomyRequestForm rf("SignedPaper");

		AForm *f = &rf;
		f->beSigned(b);
		f->Execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Tbirdper bug", 2);

		PresidentialPardonForm pf("NotSignedPaper");

		AForm *f = &pf;
		f->Execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
