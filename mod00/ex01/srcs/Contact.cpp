/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/01 16:26:26 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Utils.hpp>
#include <iostream>
#include <iomanip>

Contact::Contact( void ) {

	// std::cout << "Default contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return ;
}

bool	Contact::exists(void) {

	return (_firstName.empty() ? false : true);
}

void	Contact::newContact(void) {

	_firstName = getField("Enter first name: ");
	_lastName = getField("Enter last name: ");
	_nickname = getField("Enter nickname: ");
	_phoneNumber = getField("Enter phone number: ");
	_darkestSecret = getField("Enter darkest secret: ");
}

void	Contact::displayContact(void) {

	std::cout << "\nFirst name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

void	Contact::previewContact(int i) {

	std::cout << std::setw(10) << (i + 1) << "|";
	displayString(_firstName, '|');
	displayString(_lastName, '|');
	displayString(_nickname, '\n');
}
