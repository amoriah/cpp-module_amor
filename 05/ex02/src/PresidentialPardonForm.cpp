/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:38 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:35:39 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
		: AForm("Present Pardon", 25, 5) {
			_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) 
		: AForm(src) {
			*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	if (this == &src)
		return *this;
	_target = src._target;
	return *this;
}

void PresidentialPardonForm::Execute(const Bureaucrat &executor) const {
	canExecuteWithException(executor);

	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
