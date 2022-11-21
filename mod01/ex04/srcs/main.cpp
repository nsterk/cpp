/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/21 22:07:18 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	do_stuff(std::ofstream &ofs, std::ifstream &ifs)
{
	size_t		idx;
	std::string	str;
/**
 * 1. check if s1 is in line
 * 		YES: erase s1 & insert s2, loop again
 * 
 * 
 */
	
}



int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	size_t			idx;
	std::string		original(argv[1]);

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	//open io streams
	ifs.open(argv[1], std::ifstream::in);
	ofs.open(original.append(".replace"), std::ifstream::out);
	while (getline(ifs, str))
	{
		idx = str.find(std::string arg(argv[2]));
	}
	// ofs << str << '\n';
	ifs.close();
	ofs.close();
	return (0);
}
