/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/26 15:54:05 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	this->_type = "WrongCat";
	std::cout << "a "L_GRN"regular WrongCat "RST"spawned" << std::endl;
}

WrongCat::WrongCat(WrongCat const &original) {

	*this = original;
	std::cout << "A "L_GRN"WrongCat"RST" was "L_GRN"cloned"RST << std::endl;
}

WrongCat::~WrongCat(void) {

	std::cout << "a"PRETTY_RED" WrongCat"RST" was murdered" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

// void	WrongCat::makeSound(void) const {

// 	std::cout << CYAN"meow meow bitch"RST << std::endl;
// }
