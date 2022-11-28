/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/28 20:41:59 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <Sed.hpp>

// static void	do_stuff(std::ofstream &ofs, std::ifstream &ifs)
// {
// 	size_t		idx;
// 	std::string	str;
// /**
//  * 1. check if s1 is in line
//  * 		YES: erase s1 & insert s2, loop again
//  */
	
// }

// static void	initReplacer(char **argv) {

// 	std::string		original
// }

int	main(int argc, char **argv)
{
	std::string		original(argv[1]);
	// std::ifstream	ifs;
	// std::ofstream	ofs;
	// std::string		str;
	// size_t			idx;

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	Sed replacer(argv[1], argv[2], argv[3]);
	std::cout << replacer.getFilename() << std::endl;
	//open io streams
	/*
	ifs.open(argv[1], std::ifstream::in);
	ofs.open(original.append(".replace"), std::ifstream::out);
	while (getline(ifs, str))
	{
		idx = str.find(std::string arg(argv[2]));
	}
	// ofs << str << '\n';
	ifs.close();
	ofs.close();
	*/
	return (0);
}
