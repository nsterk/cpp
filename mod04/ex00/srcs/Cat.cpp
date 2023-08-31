/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/30 19:25:28 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	this->_type = "Cat";
	this->name = "Unnamed";
	std::cout << "A "GRN"regular cat "RST"spawned" << std::endl;
}

Cat::Cat(std::string name) {

	this->_type = "Cat";
	this->name = name;
	std::cout << "A "GRN"cat"RST" named "GRN << name << RST" was born" << std::endl;
}

Cat::Cat(Cat const &original) {

	*this = original;
	std::cout << "A "GRN"cat"RST" was "GRN"cloned"RST << std::endl;
}

Cat::~Cat(void) {

	std::cout << "A"PRETTY_RED" cat"RST" called "PRETTY_RED << name << RST" was murdered" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << CYAN"meow meow bitch"RST << std::endl;
}

Cat&	Cat::operator=(Cat const &rhs) {

	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}
