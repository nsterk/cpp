/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:51:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/30 13:14:15 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : name("Default") ,_type("Base animal") {

	std::cout << "An "L_GRN"animal"RST" named "L_GRN << name << RST" was born" << std::endl;
}

Animal::Animal(Animal const &original) {

	*this = original;
	std::cout << "An "L_GRN"animal"RST" was "L_GRN"cloned"RST << std::endl;
}

Animal::Animal(std::string name) : name(name), _type("Base animal") {

	std::cout << "An "L_GRN"animal"RST" named "L_GRN << name << RST" was born" << std::endl;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << CYAN"BLWAGWAKLGNAWGAN"RST << std::endl;
}

std::string	Animal::getType(void) const {

	return (_type);
}

Animal&	Animal::operator=(Animal const &rhs) {

	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}
