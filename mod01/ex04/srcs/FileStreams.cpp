/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileStreams.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 22:32:35 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/12 20:24:27 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileStreams.hpp"
#include <iostream>

FileStreams::FileStreams(void) {

	std::cout << "FileStreams constructor called" << std::endl;
}

FileStreams::~FileStreams(void) {

	std::cout << "FileStreams destructor called" << std::endl;
}

void	FileStreams::openStreams(const char *str) {

	std::string	original(str);
	std::string outfile = original + ".replace";

	_ifs.open(original.c_str(), std::ifstream::in);
	_ofs.open(outfile.c_str(), std::ifstream::out);
	if (_ifs.is_open() == false || _ofs.is_open() == false)
	{
		std::cout << "Error opening files" << std::endl;
		exit(1);
	}
}

void	FileStreams::closeStreams(void) {
	
	_ifs.close();
	_ofs.close();
}

std::ifstream	FileStreams::getIFS(void) {

	return (_ifs);
}

std::ofstream	FileStreams::getOFS(void) {

	return (_ofs);
}
