/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/14 18:11:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

Harl::Harl(void) {

	std::cout << "Default Harl constructor called" << std::endl;
}

Harl::~Harl(void) {

	std::cout << "Default Harl destructor called" << std::endl;
}

void	Harl::debug(void) {

	std::cout << "bla bla boohoohoo DEBUG" << std::endl;
}

void	Harl::info(void) {

	std::cout << "bla bla boohoohoo INFO" << std::endl;
}

void	Harl::warning(void) {

	std::cout << "bla bla boohoohoo WARNING" << std::endl;
}

void	Harl::error(void) {

	std::cout << "bla bla boohoohoo ERROR" << std::endl;
}

void	Harl::complain(std::string level) {

	static const t_complaint complaint[] = {
		['D'] = &Harl::debug,
		['I'] = &Harl::info
	};
}
