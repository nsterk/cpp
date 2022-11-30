/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileStreams.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 22:32:35 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/30 16:07:57 by nsterk        ########   odam.nl         */
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

void	FileStreams::openIFS(char *str) {

	_ifs.open(str, std::ifstream::in);
}
