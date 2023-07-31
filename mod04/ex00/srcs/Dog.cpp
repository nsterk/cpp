/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/30 13:13:35 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->_type = "Dog";
	this->name = "Default";
	std::cout << "A "L_GRN"dog "RST"named "L_GRN << name << RST"was born" << std::endl;
}

Dog::Dog(std::string name) {

	this->_type = "Dog";
	this->name = name;
	std::cout << "A "L_GRN"dog"RST" named "L_GRN << name << RST" was born" << std::endl;
}

Dog::Dog(Dog const &original) {

	*this = original;
	std::cout << "A "L_GRN"dog"RST" was "L_GRN"cloned"RST << std::endl;
}

Dog::~Dog(void) {

	std::cout << "A"PRETTY_RED" dog"RST" was murdered" << std::endl;
}

void	Dog::makeSound(void) const {

	std::cout << CYAN"loving woof"RST << std::endl;
}

Dog&	Dog::operator=(Dog const &rhs) {

	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}