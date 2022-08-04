/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:17:45 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:28:47 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# define DEBUG		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO		"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define WARNING	"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define ERROR		"This is unacceptable! I want to speak to the manager now."

# include <iostream>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl() { };
	~Harl() { };
	void complain(std::string level);
	
};

#endif