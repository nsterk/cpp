/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 16:41:00 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->_type = "Dog";
	std::cout << "A "L_GRN"regular dog "RST"spawned" << std::endl;
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
	return (*this);
}