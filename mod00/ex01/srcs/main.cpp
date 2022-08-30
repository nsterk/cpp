/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:48 by nsterk        #+#    #+#                 */
/*   Updated: 2022/08/30 19:46:28 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>

static void	display_rules(void) {
	
	std::cout << "Run one of the following commands" << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl;
}

int	main(void)
{
	// Contact	contact;
	Phonebook phonebook;

	display_rules();
	std::cin >> phonebook.Contacts[0].nickname;
	std::cout << phonebook.Contacts[0].nickname << std::endl;
	
	return (0);
}
