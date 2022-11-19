/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 20:07:51 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/19 16:42:16 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Utils.hpp>
#include <iostream>
#include <iomanip>

void	displayString(std::string str, char c) {

	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << c;
	else
		std::cout << std::setw(10) << str << c;
}

int		getIndex(int i) {

	std::string	cmd;
	size_t		idx;
	int			choice;

	std::cout << "\nEnter the index of the contact you want to display: ";
	while (1)
	{
		choice = 0;
		std::getline(std::cin, cmd);
		if (cmd.find_first_of("0123456789") != std::string::npos \
			&& cmd.find_first_not_of("0123456789") == std::string::npos)
			choice = std::stoi(cmd, &idx);
		if (choice < 1 || choice > i || (cmd[idx] != '\0' && !isspace(cmd[idx])))
			std::cout << "Invalid index. Try again: ";
		else
			return (choice - 1);
	}
}

std::string	getField(std::string prompt) {

	std::string	str;

	std::cout << prompt; 
	std::getline(std::cin, str);
	while (!valid(str))
	{
		std::cout << "Field cannot be empty. " << prompt;
		std::getline(std::cin, str);
	}
	return (str);
}

bool	valid(std::string str) {

	return ((str.empty() || (str.find_first_not_of("\t\n\v\f\r ") == std::string::npos)) ? false : true);

}
