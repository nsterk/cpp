/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/14 15:14:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>
#include <fstream>

static void	open_ifs(char *str, std::ifstream &ifs, std::ofstream &ofs)
{
	std::string	original(str);
	std::string outfile = original + ".replace";

	ifs.open(original.c_str(), std::ifstream::in);
	if (ifs.is_open() == false)
	{
		std::cout << "Error opening infile" << std::endl;
		exit(1);
	}
	ofs.open(outfile.c_str(), std::ifstream::out);
	if (ofs.is_open() == false)
	{
		std::cout << "Error opening outfile" << std::endl;
		exit(1);
	}	
}

int	main(int argc, char **argv)
{
	std::string		str;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	open_ifs(argv[1], ifs, ofs);
	Sed replacer(argv[2], argv[3]);
	while (getline(ifs, str))
	{
		replacer.Replacer(str);
		ofs << str;
		if (!ifs.eof())
			ofs << '\n';
	}
	ifs.close();
	ofs.close();
	return (0);
}
