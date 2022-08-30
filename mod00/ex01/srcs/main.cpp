/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/08/30 20:16:02 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>
#include <string>

static void	display_rules(void) {
	
	std::cout << "Run one of the following commands" << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl;
}

int	main(void)
{
	std::string		cmd;
	Phonebook		phonebook;

	display_rules();
	std::getline (std::cin, cmd);
	std::cout << "en nu zit er in cmd: " << cmd << std::endl;
	display_rules();
	std::getline (std::cin, cmd);
	std::cout << "en nu zit er in cmd: " << cmd << std::endl;
	// std::cin >> phonebook.Contacts[0].nickname;
	// std::cout << phonebook.Contacts[0].nickname << std::endl;
	
	return (0);
}
