/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:51:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 13:31:21 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("base WrongAnimal"){

	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << CYAN"BLWAGWAKLGNAWGAN"RST << std::endl;
}

std::string	WrongAnimal::getType(void) const {

	return (_type);
}
