/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:41:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/25 17:45:12 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap constructor called for " << name << std::endl;
	setName(name);
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::ScavTrap(ScavTrap const &original) {

	*this = original;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs) {

	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());
	return (*this);
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {

	if (!getEP() || !getHP())
		std::cout << "ScavTrap " << getName() << " tries to attack " << target << ", but is too weak" << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " brutally attacks " << target << ", causing " << getAD() << " points of damage!" << std::endl;
}