/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 20:05:11 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/20 22:31:31 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>



int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	std::string		original(argv[1]);
	std::string		newFile;

	if (argc != 4)
		std::cout << "Incorrect amount of arguments provided" << std::endl;
	//create the new filename
	newFile = original.substr(0, std::string::npos);
	newFile.append(".replace");
	//open io streams
	ifs.open(argv[1], std::ifstream::in);
	ofs.open(newFile, std::ifstream::out);
	while (getline(ifs, str))
		ofs << str << '\n';
	ifs.close();
	ofs.close();
	return (0);
}
