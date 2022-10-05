/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/05 21:18:53 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <string>

Contact::Contact( void ) {

	// std::cout << "Default contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	// std::cout << "Contact destructor called" << std::endl;
	return ;
}

Contact	Contact::new_Contact(void) {

	Contact	contact;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, contact.first_name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, contact.last_name);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, contact.nickname);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, contact.phone_number);
	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, contact.darkest_secret);
	return (contact);
}

void	Contact::display_contact(void) {

	std::cout << "First name:	" << this->first_name << std::endl;
	std::cout << "Last name:	" << this->last_name << std::endl;
	std::cout << "Nickname:	" << this->nickname << std::endl;
	std::cout << "Phone number:	" << this->phone_number << std::endl;
	std::cout << "Darkest secret:	" << this->darkest_secret << std::endl;
}
