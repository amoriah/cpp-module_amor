/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:21:27 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/15 13:09:21 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
# define C_YELLOW  "\e[1;33m"
# define C_BLUE    "\e[1;34m"
# define C_MAGENTA "\e[1;35m"
# define C_CYAN    "\e[1;36m"
# define C_RESET   "\e[0m"

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
// # include <deque>

class EasyFindException : public std::exception
{
public:
	const char* what() const throw(){
		return ("EasyFindException: matching element not found");
	}
};

template <typename T>

typename T::iterator	easyFind(T cont, int el)
{
	typename T::iterator	it;

	if ((it = std::find(cont.begin(), cont.end(), el)) == cont.end())
		throw EasyFindException();
	return (it);		
}

#endif
