/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/14 21:18:52 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <iostream>
#include <iomanip>
#include <string>

static void	DisplayString(std::string str, char c);

Phonebook::Phonebook(void) {

	// std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {

	// std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::SearchContact(void) {

	std::string	cmd;
	int			choice;
	size_t		idx;
	
	std::cout << "Enter the index of the contact you want to display." << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		if (this->Contacts[i].firstName.empty())
			break ;
		std::cout << std::setw(10) << (i + 1) << "|";
		DisplayString(this->Contacts[i].firstName, '|');
		DisplayString(this->Contacts[i].lastName, '|');
		DisplayString(this->Contacts[i].nickname, '\n');
	}
	std::getline(std::cin, cmd);
	choice = std::stoi(cmd, &idx);
	if (choice < 1 || choice > 8 || cmd[idx])
	std::cout << "Choice: " << choice << std::endl << "cmd[idx]: " << cmd[idx] << std::endl;
}

static void	DisplayString(std::string str, char c) {

	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << c;
	else
		std::cout << std::setw(10) << str << c;
}
