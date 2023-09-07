/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:53:05 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/05 15:19:26 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(getName(), 25, 5) {

	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

std::string	PresidentialPardonForm::getName(void) const {

	return ("Presidential Pardon Form");
}

void	PresidentialPardonForm::action(void) const {

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/** Now just using AForm copy constructor, but leaving this here in case i might need it later */

// PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &original) : AForm(getName(), 25, 5) {

// 	setTarget(original.getTarget());
// 	std::cout << original.getName() << " copied" << std::endl;
// }