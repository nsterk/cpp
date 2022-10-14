/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/14 21:08:04 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <string>

static bool	Valid(std::string str);

Contact::Contact( void ) {

	// std::cout << "Default contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return ;
}

int	Contact::newContact(Contact *c) {

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, c->firstName);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, c->lastName);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, c->nickname);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, c->phoneNumber);
	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, c->darkestSecret);
	if (!Valid(c->firstName) || !Valid(c->lastName) || !Valid(c->nickname) \
		|| !Valid(c->phoneNumber) || !Valid(c->darkestSecret))
		return (1);
	return (0);
}

void	Contact::displayContact(void) {

	std::cout << "First name:	" << this->firstName << std::endl;
	std::cout << "Last name:	" << this->lastName << std::endl;
	std::cout << "Nickname:	" << this->nickname << std::endl;
	std::cout << "Phone number:	" << this->phoneNumber << std::endl;
	std::cout << "Darkest secret:	" << this->darkestSecret << std::endl;
}

static bool	Valid(std::string str) {
	
	if (str.empty() == true || (str.find_first_not_of("\t\n\v\f\r ") == std::string::npos))
		return (false);
	return (true);
}