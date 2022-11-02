/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/01 15:09:35 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <iostream>

static std::string	displayRules(void) {

	std::string	cmd;

	std::cout << "\nAvailable commands: ADD, SEARCH, EXIT\n";
	std::getline(std::cin, cmd);
	std::cout << std::endl;
	return (cmd);
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
		if (!cmd.compare("EXIT"))
			break ;
		if (!cmd.compare("ADD"))
		{
			Book.Contacts[i].newContact();
			i = (i < 7) ? (i + 1) : 0;
		}
		else if (!cmd.compare("SEARCH"))
			Book.searchContact();
	}
	return (0);
}
