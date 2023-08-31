/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/30 19:23:48 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->_type = "Dog";
	this->name = "Default";
	std::cout << "A "GRN"dog "RST"named "GRN << name << RST"was born" << std::endl;
}

Dog::Dog(std::string name) {

	this->_type = "Dog";
	this->name = name;
	std::cout << "A "GRN"dog"RST" named "GRN << name << RST" was born" << std::endl;
}

Dog::Dog(Dog const &original) {

	*this = original;
	std::cout << "A "GRN"dog"RST" was "GRN"cloned"RST << std::endl;
}

Dog::~Dog(void) {

	std::cout << "A"PRETTY_RED" dog"RST" called "PRETTY_RED << name << RST" was murdered" << std::endl;
}

void	Dog::makeSound(void) const {

	std::cout << CYAN"loving woof"RST << std::endl;
}

Dog&	Dog::operator=(Dog const &rhs) {

	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}