/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:34:41 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:34:42 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		const int _gradeSign;
		const int _gardeExec;
		bool _signed;

	public:
		AForm();
		AForm(const std::string name, int gradeSign, int gradeExec);
		AForm(const AForm &src);
		virtual ~AForm();

		AForm &operator=(const AForm &src);

		std::string getName(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;
		bool getSigned(void) const;
		void beSigned(const Bureaucrat &src);

		class GradeTooHighExeption :public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("grade is too high");
				}
		};

		class GradeTooLowExeption :public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &o, const AForm &from);

#endif
