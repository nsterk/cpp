/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/12 21:48:35 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>
#include <fstream>

Sed::Sed(void) {

	std::cout << "Default Sed constructor called" << std::endl;
}

Sed::~Sed(void) {

	std::cout << "Default Sed destructor called" << std::endl;
}

Sed::Sed(char *s1, char *s2) {

	_old = std::string(s1);
	_new = std::string(s2);
	_lenOld = _old.length();
	_lenNew = _new.length();
}

// void	Sed::openStreams(const char *str) {
	
// }

/**
 * @brief als s1 zelfde als s2 just duplicate it
 * 
 * @param line 
 */
void	Sed::Replacer(std::string &line) {

	size_t	i = line.find(_old);
	while (i != line.npos)
	{
		line.erase(i, _lenOld);
		line.insert(i, _new);
		i = line.find(_old);
	}
}
