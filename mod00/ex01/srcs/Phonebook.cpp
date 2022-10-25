/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 21:16:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <Utils.hpp>

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
	
	if (this->Contacts[0].exists() == false)
	{
		std::cout << "No contacts saved to phonebook yet." << std::endl;
		return ;
	}
	i = 0;
	while (i < 8)
	{
		if (this->Contacts[i].exists() == false)
			break ;
		this->Contacts[i].previewContact(i);
		i++;
	}
	choice = getIndex(i);
	this->Contacts[choice - 1].displayContact();
}
