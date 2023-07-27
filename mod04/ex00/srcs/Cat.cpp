/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 16:45:12 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	this->_type = "Cat";
	std::cout << "A "L_GRN"regular cat "RST"spawned" << std::endl;
}

Cat::Cat(Cat const &original) {

	*this = original;
	std::cout << "A "L_GRN"cat"RST" was "L_GRN"cloned"RST << std::endl;
}

Cat::~Cat(void) {

	std::cout << "A"PRETTY_RED" cat"RST" was murdered" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << CYAN"meow meow bitch"RST << std::endl;
}

Cat&	Cat::operator=(Cat const &rhs) {

	this->_type = rhs.getType();
	return (*this);
}
