/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/17 17:48:29 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>
#include <string>

static std::string	displayRules(void) {

	std::string	cmd;

	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	std::getline(std::cin, cmd);
	return cmd;
}

int	main(void)
{
	std::string		cmd;
	Phonebook		Book;
	size_t			i;

	i = 0;
	while (1)
	{
		cmd = displayRules();
		if (cmd.compare("EXIT") == 0)
			break ;
		if (cmd.compare("ADD") == 0)
		{
			if (Book.Contacts[i].newContact(&Book.Contacts[i]))
			{
				std::cout << "bad input motherfucker" << std::endl;
				return (0);
			}
			i = (i < 7) ? (i + 1) : 0;
		}
		else if (cmd.compare("SEARCH") == 0)
			Book.SearchContact();
	}
	return (0);
}
