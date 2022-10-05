/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/05 21:39:53 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>
#include <string>

// static bool	is_valid(std::string str)
// {
// 	for (size_t i = 0; str[i]; i++)
// }


static std::string	display_rules(void) {
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

	cmd = display_rules();
	i = 0;
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("ADD") == 0)
			Book.Contacts[i] = Book.Contacts[i].new_Contact();
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline (std::cin, cmd);
	}
	Book.display_list();
	// Book.Contacts[i].display_contact();
	return (0);
}
