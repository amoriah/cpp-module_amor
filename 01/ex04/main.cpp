/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:14:55 by amoriah           #+#    #+#             */
/*   Updated: 2022/08/04 16:14:57 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstdlib>

static void printErr(std::string err)
{
	std::cerr << err << std::endl;
	exit(1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		printErr("Error: bad arguments");
	std::string s1;
	std::string s2;
	std::string buf;
	std::string filename;

	s1 = av[2];
	s2 = av[3];
	filename = av[1];
	std::ifstream fin(filename.c_str());
	if (!fin.is_open())
		printErr("Error: cannot open file");
	std::ofstream fout(filename.append(".replace").c_str());
	if (!fout)
		printErr("Error: cannot create file.replace");
	while (getline(fin, buf))
	{
		if (buf == s1)
			fout << s2 << std::endl;
		else
			fout << buf << std::endl;
	}
	fin.close();
	fout.close();
	return (0);
}
