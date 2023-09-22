/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:30:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/18 17:23:48 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(getName(), 72, 45) {

	setTarget("default");
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(getName(), 72, 45) {

	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

std::string	RobotomyRequestForm::getName(void) const {

	return ("Robotomy Request Form");
}

void	RobotomyRequestForm::action(void) const {

	std::random_device	r;
	int					random = r();

	std::cout << "Drill drill... ";
	if (random % 2)
		std::cout << getTarget() << " has been robotomized succesfully." << std::endl;
	else
		std::cout << "Robotomy on " << getTarget() << " has failed." << std::endl;
}
