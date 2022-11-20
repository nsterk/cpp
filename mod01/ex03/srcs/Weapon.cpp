/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/19 22:29:30 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/20 16:56:50 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <iostream>

Weapon::Weapon(void) {

	// std::cout << "Weapon default constructor called" << std::endl;
}

Weapon::~Weapon(void) {

	// std::cout << "Weapon destructor called" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type) {

	// std::cout << "Weapon constructor called for weapon with type " << _type << std::endl;
}

const std::string	&Weapon::getType(void) {

	return (this->_type);
}

void	Weapon::setType(const std::string type) {

	this->_type = type;
}
