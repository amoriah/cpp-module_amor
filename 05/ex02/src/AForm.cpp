/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:29 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:35:30 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
		: _name("~~~"), _gradeSign(150), _gardeExec(150), _signed(false) {
	return ;
}

AForm::AForm(const std::string name, int gradeSign, int gradeExec) 
		: _name(name), _gradeSign(gradeSign), _gardeExec(gradeExec), _signed(false) {

	if (_gradeSign < 1 || _gardeExec < 1)
		throw GradeTooHighExeption();
	if (_gradeSign > 150 || _gardeExec > 150)
		throw GradeTooLowExeption();
}

AForm::AForm(const AForm &src) 
		: _name(src.getName()), _gradeSign(src.getGradeSign()), _gardeExec(src.getGradeExec()) {

			*this = src;
}

AForm::~AForm() {
	return ;
}

//overloads

AForm &AForm::operator=(const AForm &src) {
	if (this != &src)
		this->_signed = src._signed;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, const AForm &AForm) {
	o << "[" << AForm.getName() << "]" << std::endl;
	o << "\t" << "signed : " << AForm.getSigned() << std::endl;
	o << "\t" << "grade needed to sign : " << AForm.getGradeSign() << std::endl;
	o << "\t" << "grade needed to execute : " << AForm.getGradeExec() << std::endl;
	return (o);
};

//member func

std::string AForm::getName (void) const {
	return (_name);
}

int AForm::getGradeSign(void) const {
	return _gradeSign;
}

int AForm::getGradeExec(void) const {
	return _gardeExec;
}

bool AForm::getSigned(void) const {
	return _signed;
}

void AForm::beSigned(const Bureaucrat &src) {
	if (src.getGrade() > _gradeSign)
		throw GradeTooLowExeption();
	_signed = true;
}

//new

void AForm::canExecuteWithException(const Bureaucrat &bureaucrat) const
{
	if (!_signed || bureaucrat.getGrade() >= _gardeExec)
		throw AForm::GradeTooLowExeption();
}
