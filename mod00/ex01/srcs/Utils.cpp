/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 20:07:51 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 21:26:52 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <Utils.hpp>

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
		if (cmd.find_first_of("12345678") != std::string::npos)
			choice = std::stoi(cmd, &idx);
		if (choice < 1 || choice > i || (cmd[idx] != '\0' && !isspace(cmd[idx])))
			std::cout << "Invalid index. Try again: ";
		else
			return (choice);
	}
}

std::string	getField(std::string prompt) {

	std::string	str;

	std::cout << prompt; 
	std::getline(std::cin, str);
	while (Valid(str) == false)
	{
		std::cout << "Field cannot be empty. " << prompt;
		std::getline(std::cin, str);
	}
	return (str);
}

bool	Valid(std::string str) {

	if (str.empty() == true || (str.find_first_not_of("\t\n\v\f\r ") == std::string::npos))
		return (false);
	return (true);
}
