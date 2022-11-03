/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/03 21:36:27 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <Utils.hpp>
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void) {

	// std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {

	// std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::addContact(size_t i) {

	this->contacts[i].setFirstName(getField("Enter first name: "));
	this->contacts[i].setLastName(getField("Enter last name: "));
	this->contacts[i].setNickname(getField("Enter nickname: "));
	this->contacts[i].setPhoneNumber(getField("Enter phone number: "));
	this->contacts[i].setDarkestSecret(getField("Enter darkest secret: "));
}

void	Phonebook::previewContact(size_t i) {

	std::cout << std::setw(10) << (i + 1) << "|";
	displayString(this->contacts[i].getFirstName(), '|');
	displayString(this->contacts[i].getLastName(), '|');
	displayString(this->contacts[i].getNickname(), '\n');
}

void	Phonebook::displayContact(size_t i) {

	std::cout << "\nFirst name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void	Phonebook::searchContact(void) {

	int			choice;
	size_t		i;
	
	if (!this->contacts[0].exists())
	{
		std::cout << "No contacts saved to phonebook yet.\n";
		return ;
	}
	i = 0;
	while (i < 8)
	{
		if (!this->contacts[i].exists())
			break ;
		previewContact(i);
		i++;
	}
	choice = getIndex(i);
	displayContact(i - 1);
}
