/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:20:22 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/13 16:46:58 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

struct Data
{
	std::string name;
	std::string hair;
	int			age;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr)
{
	return(reinterpret_cast<Data *>(ptr));
}

int	main()
{
	Data *data = new Data;
	data->name = "Jon Snow";
	data->hair = "black curls";
	data->age = 20;
	uintptr_t ptr;
	Data *newData;
	std::cout << "data ptr = " << data << std::endl;
	ptr = serialize(data);
	newData = deserialize(ptr);	
	std::cout << "newData ptr = " << newData << std::endl;
	std::cout << newData->name << std::endl;
	std::cout << newData->hair << std::endl;
	std::cout << newData->age << std::endl;
	delete data;
}