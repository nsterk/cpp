/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/30 20:27:05 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Sed.hpp>
#include <iostream>
#include <fstream>

Sed::Sed(void) {

	std::cout << "Default Sed constructor called" << std::endl;
}

Sed::~Sed(void) {

	std::cout << "Default Sed destructor called" << std::endl;
}
