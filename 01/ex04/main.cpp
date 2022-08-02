/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yono <yono@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:07:03 by yono              #+#    #+#             */
/*   Updated: 2022/08/02 20:24:24 by yono             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
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
	std::string *filename = av[1].c_str();
	std::string s1;
	std::string s2;
	std::string buf;
	std::ifstream fin(av[1]);
	std::ofstream fout;

	if (!fin.is_open())
		printErr("Error: cannot open file");
	if (!!getline(fin, buf))
		printErr("Error: invalid file");
	fout.open(filename.append(".replace"));
	if (!fin.is_open())
		printErr("CAN NOT CREATE FILENAME.replace");
	while (!fin.eof() && !fin.fail())
	{
		if (buf == s1)
			fout << s2 << std::endl;
		else
			fout << buf << std::endl;
		getline(fin, buf);
	}
	fin.close();
	fout.close();
	return (0);
}

/*Создайте программу, которая принимает три параметра
в следующем порядке: имя файла и две строки, s1 и s2.
Она откроет файл <filename> и скопирует его содержимое
в новый файл <filename>.replace, заменяя каждое вхождение s1 на s2.
Использование функций манипулирования файлами на
языке C запрещено и будет считаться мошенничеством.
Все функции-члены класса std::string разрешены, кроме replace. Используйте их с умом!
Конечно, обрабатывайте неожиданные входы и ошибки.
Вы должны создавать и сдавать свои собственные тесты,
чтобы убедиться, что ваша программа работает так, как ожидается.
 */