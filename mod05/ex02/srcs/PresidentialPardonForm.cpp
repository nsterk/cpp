/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:53:05 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 14:57:14 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(getName(), 25, 5) {
	
	setTarget("default");
}

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

/**
 * This was the copy constructor I used before I decided it's not necessary. The copy
 * constructor for AForm does this exact thing and can be used for all the form types.
 */

// PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &original) : AForm(getName(), 25, 5) {

// 	setTarget(original.getTarget());
// 	std::cout << original.getName() << " copied" << std::endl;
// }