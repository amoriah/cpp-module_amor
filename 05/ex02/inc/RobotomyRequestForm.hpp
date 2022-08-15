/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:20 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/11 17:35:21 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R_H
# define R_H

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		virtual void Execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif
