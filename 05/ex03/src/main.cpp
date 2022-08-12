/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:36:27 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:36:28 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	AForm *form = NULL;

	try
	{
		Bureaucrat b("Tbirdper bug", 2);

		form =intern.makeForm("presidential pardon", "NotSignedPaper");
		if (form != NULL)
			form->Execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form != NULL)
			delete form;
		form = NULL;
	}
	if (form != NULL)
		delete form;
	form = NULL;

	try
	{
		Bureaucrat b("X", 2);

		form =intern.makeForm("presidential pardon", "SignedPaper");
		if (form != NULL)
		{
			form->beSigned(b);
			form->Execute(b);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form != NULL)
			delete form;
		form = NULL;
	}
	if (form != NULL)
		delete form;
	form = NULL;

	try
	{
		Bureaucrat b("x", 70);
		Bureaucrat b1("y", 2);
		form =intern.makeForm("robotomy request", "SignedPaper");
		if (form != NULL)
		{
			form->beSigned(b);
			form->Execute(b1);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form != NULL)
			delete form;
		form = NULL;
	}
	if (form != NULL)
		delete form;
	form = NULL;

	try
	{
		Bureaucrat b("x", 70);
		Bureaucrat b1("y", 2);

		form =intern.makeForm("shrubbery creation", "SignedPaper");
		if (form != NULL)
		{
			form->beSigned(b1);
			form->beSigned(b);
			form->Execute(b1);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form != NULL)
			delete form;
		form = NULL;
	}
	if (form != NULL)
		delete form;

	form = intern.makeForm("test", "SignedPaper");
	if (form != NULL)
		delete form;

	return 0;
}
