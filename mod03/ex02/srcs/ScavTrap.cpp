/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:41:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/22 16:35:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "A ScavTrap spawned" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap " << name << " was born" << std::endl;
	setName(name);
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::ScavTrap(ScavTrap const &original) {

	*this = original;
	std::cout << "A ScavTrap was cloned" << std::endl;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "A ScavTrap died" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs) {

	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());
	return (*this);
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
