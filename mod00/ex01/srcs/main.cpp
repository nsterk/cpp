/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/09/05 21:12:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>
#include <string>

static bool			is_valid(std::string str)
{
	for (size_t i = 0; str[i]; i++)
}

static std::string	display_rules(void) {
	std::string	cmd;

	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	std::getline(std::cin, cmd);
	return cmd;
}

static size_t add_contact(Contact *contact, size_t i)
{
	std::string		cmd;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, contact->first_name);
	return (((i < 7) ? i + 1 : 0));
	
}

int	main(void)
{
	std::string		cmd;
	Phonebook		Book;

	cmd = display_rules();
	
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("ADD") == 0)
			Book.i = add_contact(&Book.Contacts[Book.i], Book.i);
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline (std::cin, cmd);
	}
	for (size_t i = 0; i <= Book.i; i++)
		std::cout << Book.Contacts[i].first_name << std::endl;
	return (0);
}
