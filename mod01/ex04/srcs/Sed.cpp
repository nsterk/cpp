/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/27 18:05:41 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>

Sed::Sed(void) {

	std::cout << "Default Sed constructor called" << std::endl;
}

Sed::Sed(char *name, char *s1, char *s2){

	std::string	filename(name);
	std::string	search(s1);
	std::string	insert(s2);

	_filename = filename.append(".replace");
	_old = search;
	_new = insert;
	std::cout << "Sed constructor called on file " << _filename << std::endl;
}

Sed::~Sed(void) {

	std::cout << "Default Sed destructor called" << std::endl;
}

void			Sed::setFilename(const std::string &name) {

	_filename = name;
}

const std::string	&Sed::getFilename(void) {

	return (_filename);
}