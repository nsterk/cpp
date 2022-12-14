/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/13 18:02:17 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		str;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	std::string	original(argv[1]);
	std::string outfile = original + ".replace";
	ifs.open(original.c_str(), std::ifstream::in);
	ofs.open(outfile.c_str(), std::ifstream::out);
	if (ifs.is_open() == false || ofs.is_open() == false)
	{
		std::cout << "Error opening files" << std::endl;
		exit(1);
	}
	Sed replacer(argv[2], argv[3]);
	while (getline(ifs, str))
	{
		replacer.Replacer(str);
		ofs << str;
		if (!ifs.eof())
			ofs << '\n';
	}
	return (0);
}
