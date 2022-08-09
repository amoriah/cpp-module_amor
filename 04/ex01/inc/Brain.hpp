/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:32:46 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/09 20:04:28 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
protected:
	std::string _ideas[100];
	
public:
	Brain();
	~Brain();
	Brain(Brain const &src);
	Brain &operator=(Brain const &dst);

	void	printIdeas() const;
};

#endif