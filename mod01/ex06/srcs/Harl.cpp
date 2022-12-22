/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 22:14:36 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/22 21:59:44 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

Harl::Harl(void) {

	// std::cout << "Default Harl constructor called" << std::endl;
}

Harl::~Harl(void) {

	// std::cout << "Default Harl destructor called" << std::endl;
}

void	Harl::debug(void) {

	std::cout << "I love having candy on my burgers, I really do!" << std::endl;
}

void	Harl::info(void) {

	std::cout << "I can't believe adding candy costs money. If there was enough candy on this burger I would not be asking for more." << std::endl;
}

void	Harl::warning(void) {

	std::cout << "I have been coming here for at least a month and I think I deserve free candy on my burger. I am a loyal patron." << std::endl;
}

void	Harl::error(void) {

	std::cout << "What do you MEAN you don't add candy to burgers? What is this, Nazi Germany? I am calling the police on you, you evil evil store clerk." << std::endl;
}

void	Harl::complain(std::string level) {

	static const std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	static complainPtr complaint[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			switch(i) {
			case 0:
				(this->*complaint[0])();
			case 1:
				(this->*complaint[1])();
			case 2:
				(this->*complaint[2])();
			case 3:
				(this->*complaint[3])();
			}
			return ;
		}
	}
	std::cout << "This is not a valid complaint!!! This is unacceptable!!! Kids these days can't even complain properly!" << std::endl;
}
