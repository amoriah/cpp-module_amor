/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:34:45 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:34:46 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("unknow"), _grade(150) {
	//this->_name = "unknown";
	//this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
	//_name = name;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

//overload

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
		_grade = bureaucrat._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat) {
	o << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return o;
}

//member func

const std::string Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void Bureaucrat::upGrade(void) {
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::downGrade(void) {
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm &AForm) const {
	try {
		AForm.beSigned(*this);
		std::cout << _name << " signs " << AForm.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << _name << " cannot sign " << AForm.getName()
			<< " because " << e.what() << std::endl;
	}
}
