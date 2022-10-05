/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/27 16:48:03 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/05 21:39:33 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <iostream>
#include <iomanip>

Phonebook::Phonebook( void ) {

	// std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook( void ) {

	// std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::display_list( void ) {

	std::cout << std::setw(10);
	std::cout << "1";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->Contacts[0].first_name;
}