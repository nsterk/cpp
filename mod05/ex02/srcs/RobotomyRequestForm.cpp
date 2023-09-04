/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:30:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/04 17:58:36 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(getName(), 72, 45) {

	setTarget(target);
	// std::cout << ""GRN << getName() << RST" form created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	// std::cout << ""PRETTY_RED << getName() << RST" form destroyed" << std::endl;
}

std::string	RobotomyRequestForm::getName(void) const {

	return ("Robotomy Request Form");
}

void	RobotomyRequestForm::action(void) {

	std::cout << "fucking hate this shit, succesfully" << std::endl;
}