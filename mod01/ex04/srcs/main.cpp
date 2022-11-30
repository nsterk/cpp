/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/30 20:35:22 by nsterk        ########   odam.nl         */
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

int	main(int argc, char **argv)
{
	Sed	replacer;
	// std::string		str;
	// size_t			idx;

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	replacer.streams.openStreams(argv[1]);
	replacer.streams.closeStreams();
	//open io streams
	/*
	while (getline(ifs, str))
	{
		idx = str.find(std::string arg(argv[2]));
	}
	*/
	return (0);
}
