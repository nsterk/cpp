/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/01 16:27:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <Utils.hpp>
#include <iostream>

Phonebook::Phonebook(void) {

	// std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {

	// std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::searchContact(void) {

	int			choice;
	int			i;
	
	if (Contacts[0].exists() == false)
	{
		std::cout << "No contacts saved to phonebook yet.\n";
		return ;
	}
	i = 0;
	while (i < 8)
	{
		if (Contacts[i].exists() == false)
			break ;
		Contacts[i].previewContact(i);
		i++;
	}
	choice = getIndex(i);
	Contacts[choice - 1].displayContact();
}
