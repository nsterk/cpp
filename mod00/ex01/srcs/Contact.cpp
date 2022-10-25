/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 17:14:50 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <string>

static bool			Valid(std::string str);
static std::string	get_field(std::string prompt);	

Contact::Contact( void ) {

	// std::cout << "Default contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return ;
}

int	Contact::newContact(Contact *c) {

	c->firstName = get_field("Enter first name: ");
	c->lastName = get_field("Enter last name: ");
	// std::cout << "Enter first name" << std::endl;
	// std::getline(std::cin, c->firstName);
	// std::cout << "Enter last name: " << std::endl;
	// std::getline(std::cin, c->lastName);
	c->nickname = get_field("Enter nickname: ");
	c->phoneNumber = get_field("Enter phone number: ");
	c->darkestSecret = get_field("Enter darkest secret: ");
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

static std::string	get_field(std::string prompt) {

	std::string	str;

	std::cout << prompt; 
	std::getline(std::cin, str);
	while (Valid(str) == false)
	{
		std::cout << "Field cannot be empty. " << prompt;
		std::getline(std::cin, str);
	}
	return (str);
}
