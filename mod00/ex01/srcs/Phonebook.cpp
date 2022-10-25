/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 17:34:58 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <iostream>
#include <iomanip>
#include <string>

static void	DisplayString(std::string str, char c);
static int	GetIndex(void);

Phonebook::Phonebook(void) {

	// std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {

	// std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::SearchContact(void) {

	int			choice;
	int			i;
	
	if (this->Contacts[0].firstName.empty())
	{
		std::cout << "No contacts saved to phonebook yet." << std::endl;
		return ;
	}
	std::cout << "Enter the index of the contact you want to display." << std::endl;
	i = 0;
	while (i < 8)
	{
		if (this->Contacts[i].firstName.empty())
			break ;
		std::cout << std::setw(10) << (i + 1) << "|";
		DisplayString(this->Contacts[i].firstName, '|');
		DisplayString(this->Contacts[i].lastName, '|');
		DisplayString(this->Contacts[i].nickname, '\n');
		i++;
	}
	choice = GetIndex(i);
	this->Contacts[choice - 1].displayContact();
}

static void	DisplayString(std::string str, char c) {

	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << c;
	else
		std::cout << std::setw(10) << str << c;
}

static int	GetIndex(int i) {

	std::string	cmd;
	size_t		idx;
	int			choice;

	std::getline(std::cin, cmd);
	while (cmd.find_first_of("12345678") == std::string::npos)
	{
		std::cout << "Invalid index provided, try again: ";
		std::getline(std::cin, cmd);
	}	
	choice = std::stoi(cmd, &idx);
	if (choice < 1 || choice > 8 || choice > i || (cmd[idx] != '\0' && !isspace(cmd[idx])))
		std::cout << "Invalid index provided" << std::endl;
}
