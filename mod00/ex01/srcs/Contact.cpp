/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 21:22:58 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Utils.hpp>
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

	return (this->firstName.empty() ? false : true);
}

int	Contact::newContact(Contact *c) {

	c->firstName = getField("Enter first name: ");
	c->lastName = getField("Enter last name: ");
	c->nickname = getField("Enter nickname: ");
	c->phoneNumber = getField("Enter phone number: ");
	c->darkestSecret = getField("Enter darkest secret: ");
	return (0);
}

void	Contact::displayContact(void) {

	std::cout << "\nFirst name:	" << this->firstName << std::endl;
	std::cout << "Last name:	" << this->lastName << std::endl;
	std::cout << "Nickname:	" << this->nickname << std::endl;
	std::cout << "Phone number:	" << this->phoneNumber << std::endl;
	std::cout << "Darkest secret:	" << this->darkestSecret << "\n\n";
}

void	Contact::previewContact(int i) {

	std::cout << std::setw(10) << (i + 1) << "|";
	displayString(this->firstName, '|');
	displayString(this->lastName, '|');
	displayString(this->nickname, '\n');
}
