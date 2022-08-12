/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:42 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:35:43 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
		: AForm("Present Pardon", 72, 45) {
			std::srand(std::time(NULL));
			_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) 
		: AForm(src) {
			std::srand(std::time(NULL));
			*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	if (this == &src)
		return *this;
	_target = src._target;
	return *this;
}

void RobotomyRequestForm::Execute(Bureaucrat const &executor) const {
	canExecuteWithException(executor);

	if (std::rand() % 2)
		std::cout << _target << " successful robotized" << std::endl;
	else
		std::cout << _target << " fail of robotized" << std::endl;
}
