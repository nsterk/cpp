/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/07 17:46:06 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Utils.hpp>
#include <iostream>

Contact::Contact( void ) {

	// std::cout << "Default contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return ;
}

/* Getter functions */

std::string	Contact::getFirstName(void) {

	return (_firstName);
}

std::string	Contact::getLastName(void) {
	
	return (_lastName);
}

std::string	Contact::getNickname(void) {
	
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void) {
	
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) {
	
	return (_darkestSecret);
}

/* Setter functions */

void	Contact::setFirstName(std::string str) {

	_firstName = str;
}

void	Contact::setLastName(std::string str) {

	_lastName = str;
}

void	Contact::setNickname(std::string str) {

	_nickname = str;
}

void	Contact::setPhoneNumber(std::string str) {

	_phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str) {

	_darkestSecret = str;
}

/* Other functions */
bool	Contact::exists(void) {

	return (_firstName.empty() ? false : true);
}
