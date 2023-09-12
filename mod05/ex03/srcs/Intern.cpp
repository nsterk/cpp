/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/07 13:15:55 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 17:50:38 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "colours.hpp"
#include <algorithm>

Intern::Intern(void) {
	std::cout << GRN"Intern"RST" constructed" << std::endl;
}

Intern::~Intern(void) {
	std::cout << PRETTY_RED"Intern"RST" destroyed" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target) {

	AForm		*form;
	std::string	tmp(name);

	form = NULL;
	std::transform(name.begin(), name.end(), name.begin(), tolower);
	if (!name.compare("shrubbery creation"))
		form = new ShrubberyCreationForm(target);
	else if (!name.compare("robotomy request"))
		form = new RobotomyRequestForm(target);
	else if (!name.compare("presidential pardon"))
		form = new PresidentialPardonForm(target);
	else
	{
		std::cout << B_RED"Error: form requested (" << tmp << ") does not exist"RST << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates " << name << " form" << std::endl;
	return (form);
}
