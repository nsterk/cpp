/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/27 15:57:50 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>

Sed::Sed(void) {

	// std::cout << "Default Sed constructor called" << std::endl;
}

Sed::~Sed(void) {

	// std::cout << "Default Sed destructor called" << std::endl;
}

Sed::Sed(char *s1, char *s2) {

	_old = std::string(s1);
	_new = std::string(s2);
	_lenOld = _old.length();
	_lenNew = _new.length();
	// std::cout << "Sed constructor called to replace '" << _old << "' with '" \
		// << _new << '\'' << std::endl;
}

void	Sed::Replacer(std::string &line) {

	size_t	i = line.find(_old);

	if (!_old.compare(_new))
		return ;
	while (i != line.npos)
	{
		line.erase(i, _lenOld);
		line.insert(i, _new);
		i = line.find(_old);
	}
}
